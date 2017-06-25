#include "Explicit.h"

Explicit::Explicit(string nombre,string artista,int duracion,int reproducciones,int favorito){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
	this->artista=artista;
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