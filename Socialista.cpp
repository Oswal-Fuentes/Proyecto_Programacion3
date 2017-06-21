#include "Socialista.h"

Socialista::Socialista(string nombre,float impuesto){
	this->nombre=nombre;
	this->impuesto=impuesto;
}
Socialista::Socialista(){

}

double Socialista::descuento(double cant){
	cant=(1-0.12)*cant;
	return cant;
}

bool Socialista::bloquearCancion(int duracion){
	if(duracion>5){
		return true;
	}else{
		return false;
	}
}
