#include "Cuenta_normal.h"
#include <cstdlib>

Cuenta_normal::Cuenta_normal(string nombre,string username,string password,vector<Cuenta*>* perteneceA){
	this->nombre=nombre;
	this->username=username;
	this->password=password;
	this->perteneceA=perteneceA;
}

Cuenta_normal::Cuenta_normal(){

}

void Cuenta_normal::agregar_a_Favoritos(Cancion* cancion){
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"Pásate a premium para hacer esto");
	}
	mvprintw(15,5,"Presiona una tecla para continuar.");
	getch();
	clear();
}
void Cuenta_normal::verHistorial(){
	clear();
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"Pásate a premium para hacer esto");
	}
	mvprintw(15,5,"Presiona una tecla para continuar.");
	getch();
	clear();	
}
void Cuenta_normal::agregar_a_Playlist(Cancion* cancion){
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"Pásate a premium para hacer esto");
	}
	mvprintw(15,5,"Presiona una tecla para continuar.");
	getch();
	clear();
}
void Cuenta_normal::cambiarTipo(){
	clear();
	mvprintw(5,5,"Está bloqueado en su region");
	clear();
}
void Cuenta_normal::cancelarSuscripcion(){
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"Pásate a premium para hacer esto");
	}
	mvprintw(15,5,"Presiona una tecla para continuar.");
	getch();
	clear();
}
void Cuenta_normal::borrarCuenta(){
	clear();
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"Se eliminó la cuenta");
	}
	getch();
	delete this;
	clear();
}



void Cuenta_normal::reproducir(vector<Cancion*> cancionesActuales){
	clear();
	char respuesta[1000];
	//Se listan las canciones
	mvprintw(4,5,"Lista de canciones.");
	for (int i = 0; i < cancionesActuales.size(); ++i){
		mvprintw(5+i,5,to_string(i).c_str());
		mvprintw(5+i,7,cancionesActuales[i]->getNombre().c_str());
	}
	
	//Menú reproducir
	mvprintw(5+cancionesActuales.size(),5,"Menú");
	mvprintw(5+cancionesActuales.size()+1,5, "1. Reproducir aleatoriamente");
	mvprintw(5+cancionesActuales.size()+2,5, "2. Agregar a favoritos");
	mvprintw(5+cancionesActuales.size()+3,5, "3. Ver historial");
	mvprintw(5+cancionesActuales.size()+4,5, "4. Agregar a playlist");
	mvprintw(5+cancionesActuales.size()+5,5, "Ingrese opción: ");
	
	//Se lee la respuesta
	getstr(respuesta);
	string resp(respuesta);
	
	//Cuando se escoge una opción
	if (resp.compare("1")==0){
		int pos=rand()%cancionesActuales.size();
		Cancion* cancion;
		cancion=cancionesActuales[pos];
		cancion->Reproducir();
		historial.push_back(cancion);
		clear();
		mvprintw(5,5,"La cancion se está reproduciendo actualmente,");
		mvprintw(6,5,"presione una tecla para continuar.");
		getch();
	}
	if (resp.compare("2")==0){
		clear();
		agregar_a_Favoritos(cancionesActuales[0]);
	}
	if (resp.compare("3")==0){
		clear();
		verHistorial();
	}
	if (resp.compare("4")==0){
		clear();
		agregar_a_Playlist(cancionesActuales[0]);
	}
}

string Cuenta_normal::getTipo(){
	return "Cuenta_normal";
}