#include <iostream>
#include <string>
#include <vector>
#include "Album.h"
#include "Persona.h"

using namespace std;

#ifndef ARTISTA_H
#define ARTISTA_H

class Artista:public Persona{
protected:
	string Nombre;
	vector<Album*>Albumes;
public:
	Artista();
	Artista(string);

	vector<Album*> getAlbumes();
	void setAlbumes(vector<Album*>);
	void setNombre(string);
	string getNombre();

	virtual void Pagar(vector<Persona*>);

};
#endif