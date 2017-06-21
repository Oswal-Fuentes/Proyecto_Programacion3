#include <iostream>
#include <string>
#include <vector>
#include "Cancion.h"

using namespace std;

#ifndef PLAYLIST_H
#define PLAYLIST_H

class Playlist{
protected:
	string nombre;
	vector<Cancion*>canciones;
public:
	Playlist(string);
	Playlist();

	string getNombre();
	void setNombre(string);

	vector<Cancion*> getCanciones();
	void setCanciones(vector<Cancion*>);

	void addCancion(Cancion*);

	
};
#endif