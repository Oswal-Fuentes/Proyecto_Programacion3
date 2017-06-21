#include "Playlist.h"

Playlist::Playlist(string nombre){
	this->nombre=nombre;
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
