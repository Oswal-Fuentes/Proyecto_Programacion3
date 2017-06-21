#include <iostream>
#include <string>
#include <vector>
#include "Album.h"
#include "Persona.h"

using namespace std;

#ifndef ARTISTA_H
#define ARTISTA_H

class Artista{
protected:
	string Nombre;
	Persona persona;
	vector<Album*>Albumes;
public:
	Artista(string);
	Artista();

	vector<Album*> getAlbumes();
	void setAlbumes(vector<Album*>);

	void setNombre(string);
	string getNombre();

	void setPersona(Persona);
	Persona getPersona();

	virtual void Pagar();
};
#endif