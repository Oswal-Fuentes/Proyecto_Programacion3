#include "Album.h"

Album::Album(string nombre){
    this->nombre=nombre;
}
Album::Album(){

}void Album::setNombre(string nombre){
   this-> nombre=nombre;
}
string Album::getNombre(){
   return nombre;
}
