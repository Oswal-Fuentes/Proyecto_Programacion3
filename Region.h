#include <iostream>
#include <string>

using namespace std;

#ifndef REGION_H
#define REGION_H

class Region{
protected:
	string nombre;
	float impuesto;
public:
	Region(string,float);
	Region();

	string getNombre();
	void setNombre(string);

	float getImpuesto();
	void setImpuesto(float);

	virtual double descuento(double);
	virtual bool bloquearCancion(int);
};
#endif