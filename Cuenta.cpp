#include "Cuenta.h"

Cuenta::Cuenta(string nombre,string username,string password){
    this->nombre=nombre;
    this->username=username;
    this->password=password;
}
Cuenta::Cuenta(){

}void Cuenta::setNombre(string nombre){
   this-> nombre=nombre;
}
string Cuenta::getNombre(){
   return nombre;
}
void Cuenta::setUsername(string username){
   this-> username=username;
}
string Cuenta::getUsername(){
   return username;
}
void Cuenta::setPassword(string password){
   this-> password=password;
}
string Cuenta::getPassword(){
   return password;
}
