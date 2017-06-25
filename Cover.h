#include <iostream>
#include <string>
#include "Cancion.h"

using namespace std;

#ifndef COVER_H
#define COVER_H

class Cover:public Cancion{
protected:
public:
	Cover(string,string,string,int,int,int);
	Cover();

	void Reproducir();
	void Favorited();

	virtual string getTipo();
};
#endif