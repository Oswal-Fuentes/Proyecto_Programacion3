#include "Solista.h"

Solista::Solista(Persona persona){
	this->persona=persona;
}
Solista::Solista(){

}

void Solista::Pagar(){
	this->persona.setDinero(this->persona.getDinero()+1);
}

