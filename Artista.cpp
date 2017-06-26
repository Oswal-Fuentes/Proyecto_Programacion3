#include "Artista.h"

Artista::Artista(){
}

Artista::Artista(string nombre){
	this->nombre=nombre;
}

vector<Album*> Artista::getAlbumes() {
	return albumes;
}

void Artista::setAlbumes(vector<Album*>albumes) {
	this->albumes = albumes;
}

void Artista::setNombre(string nombre){
	this->nombre=nombre;
}

string Artista::getNombre(){
	return nombre;
}

void Artista::setPersona(Persona persona){
	this->persona=persona;
}

Persona Artista::getPersona(){
	return persona;
}

void Artista::Pagar(){
	
}

void Artista::addAlbum(Album* album){
	albumes.push_back(album);
}