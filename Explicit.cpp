#include "Explicit.h"

Explicit::Explicit(string nombre,int duracion,int reproducciones,int favorito){
	this->nombre=nombre;
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


