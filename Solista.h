#include <iostream>
#include <string>
#include "Artista.h"
#include "Persona.h"

using namespace std;

#ifndef SOLISTA_H
#define SOLISTA_H

class Solista:public Artista{
protected:
	Persona persona;
public:
	Solista(Persona);
	Solista();

	void pagar();
};
#endif