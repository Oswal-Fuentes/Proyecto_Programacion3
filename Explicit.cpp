#include "Explicit.h"

Explicit::Explicit(string id,string nombre,string artista,int duracion,int reproducciones,int favorito){
	this->id=id;
	this->nombre=nombre;
	this->artista=artista;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
}

Explicit::Explicit(){

}

void Explicit::Reproducir(){
	reproducciones+=3;
}

void Explicit::Favorited(){
	favorito+=3;
}

string Explicit::getTipo(){
	return "Explicit";
}