#include <iostream>
#include <string>
#include <vector>
#include "Cancion.h"
#include "Artista.h"

using namespace std;

#ifndef ALBUM_H
#define ALBUM_H

class Album{
protected:
	string nombre;
	vector<Cancion*>canciones;
	Artista artista;
public:
	Album(string);
	Album();

	string getNombre();
	void setNombre(string);

	vector<Cancion*> getCanciones();
	void setCanciones(vector<Cancion*>);

	Artista getArtista();
	void setArtista(Artista);

	virtual void dibujarPortada();
};
#endif