#include <iostream>
#include <string>
#include "Artista.h"
#include "Persona.h"

using namespace std;

#ifndef SOLISTA_H
#define SOLISTA_H

class Solista:public Artista{
protected:

public:
	Solista();

	void Pagar();

	string getTipo();
};
#endif