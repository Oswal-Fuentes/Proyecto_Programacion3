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
