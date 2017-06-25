#include <iostream>
#include <string>
#include "Cancion.h"

using namespace std;

#ifndef EXPLICIT_H
#define EXPLICIT_H

class Explicit:public Cancion{
protected:
public:
	Explicit(string,int,int,int,Region*,string);
	Explicit();

	void Reproducir();
	void Favorited();

};
#endif