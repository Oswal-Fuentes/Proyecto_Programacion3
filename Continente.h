#include <iostream>
#include <string>
#include "Region.h"

using namespace std;

#ifndef CONTINENTE_H
#define CONTINENTE_H
class Continente:public Region{
protected:
public:
	Continente(string);
	Continente();

	void descuento();
	void bloquearCancion();
	void mostrarTop();
};
#endif