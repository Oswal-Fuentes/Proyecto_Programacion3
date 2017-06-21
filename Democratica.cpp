#include "Democratica.h"

Democratica::Democratica(string nombre,float impuesto){
	this->nombre=nombre;
	this->impuesto=impuesto;
}
Democratica::Democratica(){

}
double Democratica::descuento(double cant){
	cant=(1-0.15)*cant;
	return cant;
}

bool Democratica::bloquearCancion(int duracion){
	if(duracion>5){
		return true;
	}else{
		return false;
	}
}
