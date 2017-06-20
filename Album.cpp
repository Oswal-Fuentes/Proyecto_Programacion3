#include "Album.h"

Album::Album(string nombre){
	this->nombre=nombre;
}
Album::Album(){

}
void Album::setNombre(string nombre){
	this-> nombre=nombre;
}
string Album::getNombre(){
	return nombre;
}

vector<Cancion*> Album::getCanciones() {
	return canciones;
}

void Album::setCanciones(vector<Cancion*> canciones) {
	this->canciones = canciones;
}

void Album::setArtista(Artista artista){
	this-> artista=artista;
}
Artista Album::getArtista(){
	return artista;
}