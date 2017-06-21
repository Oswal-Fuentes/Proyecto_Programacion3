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
	//this->reproducciones.setReproducciones(this->reproducciones.getReproducciones()+1);
}

void Radio::Favorited(){
	//this->favorito.setFavorito(this->favorito.getFavorito()+1);
}
