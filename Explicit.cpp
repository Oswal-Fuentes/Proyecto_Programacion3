#include "Explicit.h"

Explicit::Explicit(string nombre,int duracion,int reproducciones,int favorito,int regionInt,string artista){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
	this->regionInt=regionInt;
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


