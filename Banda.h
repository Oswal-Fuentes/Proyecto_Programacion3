#include <iostream>
#include <string>
#include "Artista.h"

using namespace std;

#ifndef BANDA_H
#define BANDA_H

class Banda:public Artista{
protected:
public:
	Banda();

	void Pagar();
};
#endif