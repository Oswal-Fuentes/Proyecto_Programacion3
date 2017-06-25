#include <ncurses.h>
#include <string>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Cancion.h"
#include "Album.h"
#include "Playlist.h"
#include "Cuenta.h"
#include "Artista.h"
#include "Region.h"
#include "Dispositivo.h"
#include "Persona.h"
#include "Radio.h"
#include "Explicit.h"
#include "En_vivo.h"
#include "Cover.h"
#include "Single.h"
#include "Album_completo.h"
#include "Recopilatorio.h"
#include "Normal.h"
#include "Cuenta_normal.h"
#include "Cuenta_premium.h"
#include "Solista.h"
#include "Banda.h"
#include "Socialista.h"
#include "Democratica.h"
#include "Tablet.h"
#include "PC.h"
#include "Movil.h"

using namespace std;

void operator>>(string&,vector<Cancion*>&);

int main(int argc, char const *argv[]){
	Cancion c("Live forever","Oasis",1,2,3);
	cout<<c;
	//Se guardan las canciones en el archivo
	ofstream archivo;
	string ruta("./canciones.txt");
	archivo.open(ruta.c_str(),ios::out);

	//Si el archivo falla
	if (archivo.fail()){
		cout<<"No se puede abrir el archivo"<<endl;
	}

	archivo<<c;
	archivo.flush();
	//Se lee en un vector todas las canciones
	vector<Cancion*> canciones;
	ruta>>canciones;
	cout<<*canciones[0]<<endl;
	return 0;
}

void operator>>(string &ruta,vector<Cancion*> &canciones){
	ifstream entrada;
	entrada.open(ruta,ios::in);
	do{
		string tipo;
		getline(entrada,tipo);
		string nombre;
		getline(entrada,nombre);
		string artista;
		getline(entrada,artista);
		if (tipo.compare("Cover")){
			canciones.push_back(new Cover(nombre,artista,1,2,3));
		}
		if (tipo.compare("En_vivo")){
			canciones.push_back(new En_vivo(nombre,artista,1,2,3));
		}
		if (tipo.compare("Explicit")){
			canciones.push_back(new Explicit(nombre,artista,1,2,3));
		}
		if (tipo.compare("Radio")){
			canciones.push_back(new Radio(nombre,artista,1,2,3));
		}
	} while (!entrada.eof());
}