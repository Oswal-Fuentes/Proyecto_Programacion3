#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H

class Persona{
protected:
	int dinero;
public:
	Persona(int);
	Persona();

	int getDinero();
	void setDinero(int);

};
#endif