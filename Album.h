#include <iostream>
#include <string>
#include <vector>
#include "Cancion.h"

using namespace std;

#ifndef ALBUM_H
#define ALBUM_H

class Album{
protected:
	string id;
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

	friend ostream& operator<<(ostream& salida,Album& album){
		string textocanciones="";
		for (int i = 0; i < album.getCanciones().size(); ++i){
			textocanciones+=textocanciones[i]+album.getCanciones()[i]->getId()+'\n';
		}
		textocanciones+="end\n";
		return salida<<
		album.id<<endl<<
		album.nombre<<endl<<
		textocanciones<<endl;
	}
};
#endif