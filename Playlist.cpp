#include "Playlist.h"

Playlist::Playlist(string nombre){
    this->nombre=nombre;
}
Playlist::Playlist(){

}void Playlist::setNombre(string nombre){
   this-> nombre=nombre;
}
string Playlist::getNombre(){
   return nombre;
}
