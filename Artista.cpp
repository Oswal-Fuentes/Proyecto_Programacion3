#include "Artista.h"

Artista::Artista(){
}

Artista::Artista(string Nombre){
	this->Nombre=Nombre;
}

vector<Album*> Artista::getAlbumes() {
	return Albumes;
}

void Artista::setAlbumes(vector<Album*>Albumes) {
	this->Albumes = Albumes;
}

void Artista::Pagar(vector<Persona*>personas){
	
}

void Artista::setNombre(string Nombre){
	this->Nombre=Nombre;
}

string Artista::getNombre(){
	return Nombre;
}