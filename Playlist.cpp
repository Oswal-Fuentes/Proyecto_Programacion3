#include "Playlist.h"

Playlist::Playlist(string nombre){
	this->nombre=nombre;
	this->id=id;
}
Playlist::Playlist(){

}
void Playlist::setNombre(string nombre){
	this-> nombre=nombre;
}
string Playlist::getNombre(){
	return nombre;
}

vector<Cancion*> Playlist::getCanciones() {
	return canciones;
}

void Playlist::setCanciones(vector<Cancion*> canciones) {
	this->canciones = canciones;
}

void Playlist::addCancion(Cancion* cancion){
	canciones.push_back(cancion);
}

void Playlist::setId(string id){
	this->id=id;
}

string Playlist::getId(){
	return id;
}