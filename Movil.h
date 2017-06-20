#include <iostream>
#include <string>
#include "Dispositivo.h"

using namespace std;

#ifndef MOVIL_H
#define MOVIL_H

class Movil:public Dispositivo{
protected:
public:
	Movil(string);
	Movil();
};
#endif