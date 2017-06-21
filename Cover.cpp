#include "Cover.h"

Cover::Cover(string nombre,int duracion,int reproducciones,int favorito){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
}
Cover::Cover(){

}

void Cover::Reproducir(){
	//this->reproducciones.setReproducciones(this->reproducciones.getReproducciones()+1);
}
void Cover::Favorited(){
	//this->favorito.setFavorito(this->favorito.getFavorito()+1);
}
