#include <iostream>
#include <string>
#include <vector>
#include "Cancion.h"

using namespace std;

#ifndef ALBUM_H
#define ALBUM_H

class Album{
protected:
	string nombre;
	vector<Cancion*>canciones;
public:
	Album(string);
	Album();

	string getNombre();
	void setNombre(string);

	vector<Cancion*> getCanciones();
	void setCanciones(vector<Cancion*>);

	virtual void dibujarPortada();
};
#endif