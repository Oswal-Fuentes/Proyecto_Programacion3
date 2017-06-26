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
	clear();
	for (int i = 0; i < playlists.size(); ++i)
	{
		mvprintw(5+i,5,to_string(i).c_str());
		mvprintw(5+i,7,playlists[i]->getNombre().c_str());
	}
	mvprintw(5+playlists.size()+1,5,"Ingrese la posición de la playlist a la que lo desea agregar,");
	mvprintw(5+playlists.size()+2,5,"o ingrese (a) si desea agregar: ");
	char respuesta[100];
	getstr(respuesta);
	string resp(respuesta);
	if (resp.compare("a")==0){
		clear();
		mvprintw(5,5,"Ingrese el nombre de la playlist: ");
		getstr(respuesta);
		string nombrePlaylist(respuesta);
		playlists.push_back(new Playlist(nombrePlaylist));
		int posPlaylist=playlists.size()-1;
		playlists[posPlaylist]->addCancion(cancion);
		cancion->Favorited();
	}else{
		int posPlaylist=atoi(respuesta);
		playlists[posPlaylist]->addCancion(cancion);
	}
}

void Cuenta_premium::cambiarTipo(){
	clear();
	mvprintw(5,5,"Ud es un cliente especial, le regalamos más meses hasta y dinero!!");
	persona->agregarDinero(15);
	clear();
}

void Cuenta_premium::cancelarSuscripcion(){
	clear();
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"¡Por favor no elimine la cuenta!, le vamos a pagar! (s-sí eliminar) (n-no) ");
	}
	char respuesta[100];
	getstr(respuesta);
	string resp(respuesta);
	if (resp.compare("s")!=0){
		clear()	;
		mvprintw(5,5,"Gracias!!!!!!");
		persona->agregarDinero(15);
	}else{
		clear();
		mvprintw(5,5,"No tiene escapatoria muajajaja!!");
	}
	getch();
	clear();
}
void Cuenta_premium::borrarCuenta(){
	clear();
	for (int i = 0; i < 10; ++i){
		mvprintw(5+i,5,"Se eliminó la cuenta");
	}
	getch();
	delete this;
	clear();
}
void Cuenta_premium::reproducir(vector<Cancion*> cancionesActuales){
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
		clear();
		for (int i = 0; i < cancionesActuales.size(); ++i){
			mvprintw(5+i,5,to_string(i).c_str());
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

string Cuenta_premium::getTipo(){
	return "Cuenta_premium";
}