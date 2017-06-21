#include <iostream>
#include <string>
#include "Region.h"

using namespace std;

#ifndef DEMOCRATICA_H
#define DEMOCRATICA_H

class Democratica:public Region{
protected:

public:
	Democratica(string,float);
	Democratica();

	double descuento(double);
	bool bloquearCancion(int);
};
#endif