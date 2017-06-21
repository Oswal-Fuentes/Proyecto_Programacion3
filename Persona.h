#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H

class Persona{
protected:
	int dinero;
	string id;
public:
	Persona(int,string);
	Persona();

	int getDinero();
	void setDinero(int);

	string getid();
	void setid(string);

	void agregarDinero();

};
#endif