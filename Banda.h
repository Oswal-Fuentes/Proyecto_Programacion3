#include <iostream>
#include <string>
#include <vector>
#include "Artista.h"
#include "Persona.h"

using namespace std;

#ifndef BANDA_H
#define BANDA_H

class Banda:public Artista{
protected:
	vector<Persona*>integrantes;
public:
	Banda();

	vector<Persona*> getIntegrantes();
	void setIntegrantes(vector<Persona*>);

	void Pagar();
};
#endif