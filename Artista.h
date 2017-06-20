#include <iostream>
#include <string>
#include <vector>
#include "Cancion.h"

using namespace std;

#ifndef ARTISTA_H
#define ARTISTA_H

class Artista{
protected:
	vector<Cancion*>canciones;
public:
	Artista();

	vector<Cancion*> getCanciones();
	void setCanciones(vector<Cancion*>);
};
#endif