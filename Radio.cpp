#include "Radio.h"

Radio::Radio(string id,string nombre,string artista,int duracion,int reproducciones,int favorito){
	this->id=id;
	this->nombre=nombre;
	this->artista=artista;
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

string Radio::getTipo(){
	return "Radio";
}