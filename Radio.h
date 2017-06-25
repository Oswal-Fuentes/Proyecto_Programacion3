#include <iostream>
#include <string>
#include "Cancion.h"

using namespace std;

#ifndef RADIO_H
#define RADIO_H

class Radio:public Cancion{
protected:
public:
	Radio(string,string,int,int,int);
	Radio();

	void Reproducir();
	void Favorited();

	virtual string getTipo();
};
#endif