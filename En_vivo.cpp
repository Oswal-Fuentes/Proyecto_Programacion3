#include "En_vivo.h"

En_vivo::En_vivo(string nombre,string artista,int duracion,int reproducciones,int favorito){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
	this->artista=artista;
}

En_vivo::En_vivo(){

}

void En_vivo::Reproducir(){
	reproducciones+=4;
}

void En_vivo::Favorited(){
	favorito+=4;
}


string En_vivo::getTipo(){
	return "En_vivo";
}