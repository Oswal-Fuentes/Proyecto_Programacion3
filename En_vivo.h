#include <iostream>
#include <string>
#include "Cancion.h"

using namespace std;

#ifndef EN_VIVO_H
#define EN_VIVO_H

class En_vivo:public Cancion{
protected:
public:
	En_vivo(string,string,string,int,int,int);
	En_vivo();

	void Reproducir();
	void Favorited();
	
	virtual string getTipo();
};
#endif