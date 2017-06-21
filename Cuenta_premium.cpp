#include "Cuenta_premium.h"

Cuenta_premium::Cuenta_premium(string nombre,string username,string password,vector<Cuenta*>* perteneceA){
	this->nombre=nombre;
	this->username=username;
	this->password=password;
	this->perteneceA=perteneceA;
}

Cuenta_premium::Cuenta_premium(){

}

void Cuenta_premium::agregar_a_Favoritos(Cancion* cancion){
	favoritos.push_back(cancion);
}

void Cuenta_premium::verHistorial(){
	clear();
	for (int i = 0; i < historial.size(); ++i){
		mvprintw(5+i,5,historial[i]->getNombre().c_str());
	}
	getch();
	clear();
}
void Cuenta_premium::agregar_a_Playlist(Cancion* cancion){
	for (int i = 0; i < playlist.size(); ++i)
	{
		mvprintw(5+i,5,)
	}
}
void Cuenta_premium::cambiarTipo(){
	
}
void Cuenta_premium::cancelarSuscripcion(){
	
}
void Cuenta_premium::borrarCuenta(){
	
}
void Cuenta_premium::reproducir(vector<Cancion*> cancionesActuales){
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
			mvprintw(5+i,5,to_string(i));
			mvprintw(5+i,7,cancionesActuales[i]->getNombre().c_str());
		}
		mvprintw(5+cancionesActuales.size()+1,5,"Ingrese la posición de la canción que desea: ");
		char respuesta2[200];
		getstr(respuesta2);
		int pos=atoi(respuesta2);
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