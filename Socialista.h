#include <iostream>
#include <string>
#include "Region.h"

using namespace std;

#ifndef SOCIALISTA_H
#define SOCIALISTA_H

class Socialista:public Region{
protected:

public:
	Socialista(string,float);
	Socialista();

	double descuento(double);
	bool bloquearCancion(int);

};
#endif