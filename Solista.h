#include <iostream>
#include <string>
#include "Artista.h"

using namespace std;

#ifndef SOLISTA_H
#define SOLISTA_H

class Solista:public Artista{
protected:
public:
	Solista();

	void pagar();
};
#endif