#include "Cover.h"

Cover::Cover(string nombre,string artista,int duracion,int reproducciones,int favorito){
	this->nombre=nombre;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
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
string Cover::getTipo(){
	return "Cover";
}