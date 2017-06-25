#include "En_vivo.h"

En_vivo::En_vivo(string id,string nombre,string artista,int duracion,int reproducciones,int favorito){
	this->id=id;
	this->nombre=nombre;
	this->artista=artista;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
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