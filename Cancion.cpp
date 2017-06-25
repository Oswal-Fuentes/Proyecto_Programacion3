#include "Cancion.h"


Cancion::Cancion(string id,string nombre,string artista,int duracion,int reproducciones,int favorito){
	this->id=id;
	this->nombre=nombre;
	this->artista=artista;
	this->duracion=duracion;
	this->reproducciones=reproducciones;
	this->favorito=favorito;
}
Cancion::Cancion(){

}
string Cancion::getId(){
	return id;
}
void Cancion::setNombre(string nombre){
	this-> nombre=nombre;
}
string Cancion::getNombre(){
	return nombre;
}
void Cancion::setDuracion(int duracion){
	this-> duracion=duracion;
}
int Cancion::getDuracion(){
	return duracion;
}
void Cancion::setReproducciones(int reproducciones){
	this-> reproducciones=reproducciones;
}
int Cancion::getReproducciones(){
	return reproducciones;
}
void Cancion::setFavorito(int favorito){
	this-> favorito=favorito;
}
int Cancion::getFavorito(){
	return favorito;
}

void Cancion::Reproducir(){
	reproducciones++;
}

void Cancion::Favorited(){
	favorito++;
}

string Cancion::getTipo(){
	return "sinTipo";
}