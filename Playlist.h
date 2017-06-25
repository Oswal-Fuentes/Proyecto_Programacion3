#include <iostream>
#include <string>
#include <vector>
#include "Cancion.h"

using namespace std;

#ifndef PLAYLIST_H
#define PLAYLIST_H

class Playlist{
protected:
	string id;
	string nombre;
	vector<Cancion*>canciones;
public:
	Playlist(string);
	Playlist();

	void setId(string);

	string getNombre();
	void setNombre(string);

	vector<Cancion*> getCanciones();
	void setCanciones(vector<Cancion*>);

	void addCancion(Cancion*);

	friend ostream& operator<<(ostream& salida,Playlist& playlist){
		string textocanciones="";
		for (int i = 0; i < playlist.getCanciones().size(); ++i){
			textocanciones+=textocanciones[i]+playlist.getCanciones()[i]->getId()+'\n';
		}
		textocanciones+="end\n";
		return salida<<
		playlist.id<<endl<<
		playlist.nombre<<endl<<
		textocanciones<<endl;
	}
	
};
#endif