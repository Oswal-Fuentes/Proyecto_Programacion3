#include "Region.h"

Region::Region(string nombre,float impuesto){
	this->nombre=nombre;
	this->impuesto=impuesto;
}
Region::Region(){

}
void Region::setNombre(string nombre){
	this-> nombre=nombre;
}
string Region::getNombre(){
	return nombre;
}

float Region::getImpuesto(){
	return impuesto;
}

void Region::setImpuesto(float impuesto){
	this->impuesto=impuesto;
}

double Region::descuento(double cant){

}
bool Region::bloquearCancion(int duracion){

}
