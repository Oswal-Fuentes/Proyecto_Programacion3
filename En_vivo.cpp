#include "En_vivo.h"

En_vivo::En_vivo(string nombre,int duracion,int reproducciones,int favorito){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
}

En_vivo::En_vivo(){

}

void En_vivo::Reproducir(){
	reproducciones++;
}

void En_vivo::Favorited(){
	favorito++;
}


