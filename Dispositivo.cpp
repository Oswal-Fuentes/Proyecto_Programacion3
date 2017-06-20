#include "Dispositivo.h"

Dispositivo::Dispositivo(string ip){
	this->ip=ip;
}
Dispositivo::Dispositivo(){

}
void Dispositivo::setIp(string ip){
	this-> ip=ip;
}
string Dispositivo::getIp(){
	return ip;
}
