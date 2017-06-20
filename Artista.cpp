#include "Artista.h"

Artista::Artista(){
}

vector<Cancion*> Artista::getCanciones() {
	return canciones;
}

void Artista::setCanciones(vector<Cancion*>canciones) {
	this->canciones = canciones;
}

void Artista::Pagar(){
	
}