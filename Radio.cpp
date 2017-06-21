#include "Radio.h"

Radio::Radio(string nombre,int duracion,int reproducciones,int favorito){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
}

Radio::Radio(){
	
}

void Radio::Reproducir(){
	reproducciones+=2;
}

void Radio::Favorited(){
	favorito+=2;
}
