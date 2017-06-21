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
	clear();
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"Pásate a premium para hacer esto");
	}
	getch();
	clear();
}
void Cuenta_normal::verHistorial(){
	clear();
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"Pásate a premium para hacer esto");
	}
	getch();
	clear();	
}
void Cuenta_normal::agregar_a_Playlist(Cancion* cancion){
	clear();
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"Pásate a premium para hacer esto");
	}
	getch();
	clear();
}
void Cuenta_normal::cambiarTipo(){

}
void Cuenta_normal::cancelarSuscripcion(){
	clear();
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"Lo sentimos (igual le seguiremos enviando SPAM)");
	}
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
	for (int i = 0; i < cancionesActuales.size(); ++i){
		
	}
	//Menú reproducir
	mvprintw(5,5,"Menú");
	mvprintw(5,6,"1. Reproducir aleatoriamente");
	mvprintw(5,7,"2. Agregar a favoritos");
	mvprintw(5,8,"3. Ver historial");
	mvprintw(5,9,"4. Agregar a playlist");
	mvprintw(5,10,"5. Pásate a premium");
	mvprintw(5,11,"6. Cancelar suscripcion");
	mvprintw(5,12,"7. Borrar cuenta");
	//Se lee la respuesta
	getstr(respuesta);
	string resp(respuesta);
	//Cuando se escoge una opción
	if (resp.compare("1")==0){
		for (int i = 0; i < cancionesActuales.size(); ++i){
			mvprintw(5+i,5,cancionesActuales[i]->getNombre().c_str());
		}
		int pos=rand()%cancionesActuales.size();
		Cancion* cancion;
		cancion=cancionesActuales[pos];
		cancion->Reproducir();
		historial.push_back(cancion);
	}
	if (resp.compare("2")==0){
		agregar_a_Favoritos(cancionesActuales[0]);
	}
	if (resp.compare("3")==0){
		verHistorial();
	}
	if (resp.compare("4")==0){
		agregar_a_Playlist(cancionesActuales[0]);
	}
	if (resp.compare("5")==0){
		cambiarTipo();
	}
	if (resp.compare("6")==0){
		cancelarSuscripcion();
	}
	if (resp.compare("7")==0){
		borrarCuenta();
	}
}