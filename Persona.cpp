#include "Persona.h"

Persona::Persona(string id,int dinero){
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

string Persona::getId(){
	return id;
}
void Persona::setId(string id){
	this->id=id;
}
void Persona::agregarDinero(int dinero){
	this->dinero+=dinero;
}
