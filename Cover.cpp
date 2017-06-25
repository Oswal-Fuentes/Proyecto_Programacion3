#include "Cover.h"

Cover::Cover(string nombre,int duracion,int reproducciones,int favorito,Region* region,string artista){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
	this->region=region;
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
