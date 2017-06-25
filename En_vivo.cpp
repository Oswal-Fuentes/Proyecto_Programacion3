#include "En_vivo.h"

En_vivo::En_vivo(string nombre,int duracion,int reproducciones,int favorito,int regionInt,string artista){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
	this->regionInt=regionInt;
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


