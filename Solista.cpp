#include "Solista.h"

Solista::Solista(){

}

void Solista::Pagar(){
		personas[0]->setDinero(personas[0]->getDinero()+1);
}

string Solista::getTipo(){
	return "Solista";
}