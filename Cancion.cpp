#include "Cancion.h"

Cancion::Cancion(string nombre,int duracion,int reproducciones,int favorito){
  this->nombre=nombre;
  this->duracion=duracion;
  this->reproducciones=reproducciones;
  this->favorito=favorito;
}
Cancion::Cancion(){

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
