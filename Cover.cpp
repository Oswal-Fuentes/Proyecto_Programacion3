#include "Cover.h"

Cover::Cover(string id,string nombre,string artista,int duracion,int reproducciones,int favorito){
	this->id=id;
	this->nombre=nombre;
	this->artista=artista;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
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