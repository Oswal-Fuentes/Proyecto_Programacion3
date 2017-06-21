#include "Banda.h"

Banda::Banda(){
}

vector<Persona*> Banda::getIntegrantes(){
	return integrantes;
}
void Banda::setIntegrantes(vector<Persona*>integrantes){
	this->integrantes=integrantes;
}

void Banda::Pagar(){
	for (int i = 0; i < this->integrantes.size(); ++i)
	{
		this->integrantes[i]->setDinero(this->integrantes[i]->getDinero()+1);
	}
}