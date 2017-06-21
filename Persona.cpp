#include "Persona.h"

Persona::Persona(int dinero,string id){
	this->dinero=dinero;
	this->id=id;	
}
Persona::Persona(){

}
void Persona::setDinero(int dinero){
	this-> dinero=dinero;
}
int Persona::getDinero(){
	return dinero;
}

string Persona::getid(){
	return id;
}
void Persona::setid(string id){
	this->id=id;
}
void Persona::agregarDinero(int dinero){
	this->dinero+=dinero;
}
