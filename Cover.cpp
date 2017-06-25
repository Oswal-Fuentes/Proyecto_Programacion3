#include "Cover.h"

Cover::Cover(string nombre,int duracion,int reproducciones,int favorito,int regionInt,string artista){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
	this->regionInt=regionInt;
	this->artista=artista;
}
Cover::Cover(){

}

void Cover::Reproducir(){
	reproducciones+=5;
}
void Cover::Favorited(){
	favorito+=5;
}
