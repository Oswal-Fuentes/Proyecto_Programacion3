#include <iostream>
#include <string>
#include "Cancion.h"

using namespace std;

#ifndef COVER_H
#define COVER_H

class Cover:public Cancion{
protected:
public:
	Cover(string,int,int,int,int,string);
	Cover();

	void Reproducir();
	void Favorited();

};
#endif