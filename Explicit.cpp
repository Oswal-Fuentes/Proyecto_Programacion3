#include "Explicit.h"

Explicit::Explicit(string nombre,int duracion,int reproducciones,int favorito,Region* region,string artista){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
	this->region=region;
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


