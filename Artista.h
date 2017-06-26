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
	string nombre;
	vector<Album*>albumes;
public:
	Artista(string);
	Artista();

	vector<Album*> getAlbumes();
	void setAlbumes(vector<Album*>);

	void setNombre(string);
	string getNombre();

	void addAlbum(Album*);

	virtual string getTipo();

	friend ostream& operator<<(ostream& salida,Artista& artista){
		string textoalbumes="";
		for (int i = 0; i < artista.getAlbumes().size(); ++i){
			textoalbumes+=artista.getAlbumes()[i]->getId()+'\n';
		}
		textoalbumes+="end";
		return salida<<
		artista.nombre<<endl<<
		textoalbumes<<endl;
	}

	virtual void Pagar();
};
#endif