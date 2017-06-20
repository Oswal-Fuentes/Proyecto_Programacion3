#include "Region.h"

Region::Region(string nombre){
	this->nombre=nombre;
}
Region::Region(){

}
void Region::setNombre(string nombre){
	this-> nombre=nombre;
}
string Region::getNombre(){
	return nombre;
}
