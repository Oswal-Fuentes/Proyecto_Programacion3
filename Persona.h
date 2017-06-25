#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H

class Persona{
protected:
	string id;
	int dinero;
public:
	Persona(string,int);
	Persona();

	int getDinero();
	void setDinero(int);

	string getid();
	void setid(string);

	void agregarDinero(int);

	friend ostream& operator<<(ostream& salida,Persona& persona){
        return salida<<
                persona.id<<endl<<
                persona.dinero<<endl;
    }
};
#endif