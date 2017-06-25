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
void operator>>(string&,vector<Persona*>&);
void recuperarPlaylists(string&,vector<Playlist*>&,vector<Cancion*>&);

int main(int argc, char const *argv[]){
	ofstream archivo;
	string ruta;
	//Prueba de canciones
	cout<<"----------------------------"<<endl;
	cout<<"PRUEBA DE CANCIONES"<<endl;
	cout<<"----------------------------"<<endl;
	vector<Cancion*> canciones;
	canciones.push_back(new Cover("1","Live forever","Oasis",1,2,3));
	canciones.push_back(new En_vivo("2","Symphony of Destruction","Megadeth",1,2,3));
	cout<<"VECTOR CREADO"<<endl;
	for (int i = 0; i < canciones.size(); ++i){
		cout<<*canciones[i];
	}
		//Se guardan las canciones en el archivo	
	ruta="./canciones.txt";
	archivo.open(ruta.c_str(),ios::out);

		//Si el archivo falla
	if (archivo.fail()){
		cout<<"No se puede abrir el archivo"<<endl;
	}

	for (int i = 0; i < canciones.size(); ++i){
		archivo<<*canciones[i];
	}
	archivo.flush();
	archivo.close();
	canciones.clear();
		//Se lee en un vector todas las canciones
	cout<<"VECTOR RECONSTRUIDO"<<endl;
	ruta>>canciones;
	for (int i = 0; i < canciones.size(); ++i){
		cout<<*canciones[i];
	}


	//Prueba de personas
	cout<<"----------------------------"<<endl;
	cout<<"PRUEBA DE PERSONAS"<<endl;
	cout<<"----------------------------"<<endl;
	vector<Persona*> personas;
	personas.push_back(new Persona("1",0));
	personas.push_back(new Persona("2",1));
	cout<<"VECTOR CREADO"<<endl;
	for (int i = 0; i < personas.size(); ++i){
		cout<<*personas[i];
	}
		//Se guardan las personas en el archivo	
	ruta="./personas.txt";
	archivo.open(ruta.c_str(),ios::out);

		//Si el archivo falla
	if (archivo.fail()){
		cout<<"No se puede abrir el archivo"<<endl;
	}

	for (int i = 0; i < personas.size(); ++i){
		archivo<<*personas[i];
	}
	archivo.flush();
	archivo.close();
	personas.clear();
		//Se lee en un vector todas las personas
	cout<<"VECTOR RECONSTRUIDO"<<endl;
	ruta>>personas;
	for (int i = 0; i < personas.size(); ++i){
		cout<<*personas[i];
	}

	//Prueba de playlists
	cout<<"----------------------------"<<endl;
	cout<<"PRUEBA DE PLAYLISTS"<<endl;
	cout<<"----------------------------"<<endl;
	vector<Playlist*> playlists;
	playlists.push_back(new Playlist("Rock"));
	playlists.push_back(new Playlist("Metal"));
	
	playlists[0]->setId("1");
	playlists[1]->setId("2");

	playlists[0]->addCancion(canciones[0]);
	playlists[0]->addCancion(canciones[0]);
	playlists[0]->addCancion(canciones[1]);
	
	playlists[1]->addCancion(canciones[1]);
	playlists[1]->addCancion(canciones[0]);
	playlists[1]->addCancion(canciones[1]);

	cout<<"VECTOR CREADO"<<endl;
	for (int i = 0; i < playlists.size(); ++i){
		cout<<*playlists[i];
	}
		//Se guardan las playlists en el archivo	
	ruta="./playlists.txt";
	archivo.open(ruta.c_str(),ios::out);

		//Si el archivo falla
	if (archivo.fail()){
		cout<<"No se puede abrir el archivo"<<endl;
	}

	for (int i = 0; i < playlists.size(); ++i){
		archivo<<*playlists[i];
	}
	//archivo<<"endOfFile";
	archivo.flush();
	archivo.close();
	playlists.clear();
		//Se lee en un vector todas las playlists
	cout<<"VECTOR RECONSTRUIDO"<<endl;
	recuperarPlaylists(ruta,playlists,canciones);
	for (int i = 0; i < playlists.size(); ++i){
		cout<<*playlists[i];
	}
	cout<<"Canciones de playlists[0]"<<endl;
	for (int i = 0; i < playlists[0]->getCanciones().size(); ++i){
		cout<<*(playlists[0]->getCanciones()[i]);
	}
	return 0;
}

void operator>>(string &ruta,vector<Cancion*> &canciones){
	ifstream entrada;
	entrada.open(ruta,ios::in);
	do{
		//Se leen los atributos
		string id;
		getline(entrada,id);
		string tipo;
		getline(entrada,tipo);
		string nombre;
		getline(entrada,nombre);
		string artista;
		getline(entrada,artista);
		string duracion;
		getline(entrada,duracion);
		string reproducciones;
		getline(entrada,reproducciones);
		string favorito;
		getline(entrada,favorito);
		//Se crea la instancia según el tipo
		if (tipo.compare("Cover")==0){
			canciones.push_back(new Cover(id,nombre,artista,
				atoi(duracion.c_str()),atoi(reproducciones.c_str()),atoi(favorito.c_str())));
		}
		if (tipo.compare("En_vivo")==0){
			canciones.push_back(new En_vivo(id,nombre,artista,
				atoi(duracion.c_str()),atoi(reproducciones.c_str()),atoi(favorito.c_str())));
		}
		if (tipo.compare("Explicit")==0){
			canciones.push_back(new Explicit(id,nombre,artista,
				atoi(duracion.c_str()),atoi(reproducciones.c_str()),atoi(favorito.c_str())));
		}
		if (tipo.compare("Radio")==0){
			canciones.push_back(new Radio(id,nombre,artista,
				atoi(duracion.c_str()),atoi(reproducciones.c_str()),atoi(favorito.c_str())));
		}
		if (tipo.compare("sinTipo")==0){
			canciones.push_back(new Cover(id,nombre,artista,
				atoi(duracion.c_str()),atoi(reproducciones.c_str()),atoi(favorito.c_str())));
		}
	} while (!entrada.eof());
	entrada.close();
}

void operator>>(string &ruta,vector<Persona*> &personas){
	ifstream entrada;
	entrada.open(ruta,ios::in);
	do{
		//Se leen los atributos
		string id;
		getline(entrada,id);
		string dinero;
		getline(entrada,dinero);
		personas.push_back(new Persona(id,atoi(dinero.c_str())));
	} while (!entrada.eof());
	personas.pop_back();
	entrada.close();
}

void recuperarPlaylists(string &ruta,vector<Playlist*> &playlists,vector<Cancion*>&canciones){
	ifstream entrada;
	entrada.open(ruta,ios::in);
	bool final=false;
	while (!entrada.eof()){
		//Se leen los atributos
		string id;
		getline(entrada,id);
		string nombre;
		getline(entrada,nombre);
		playlists.push_back(new Playlist(nombre));
		//Se obtiene la playlist
		Playlist* ptrPlaylist=playlists[playlists.size()-1];
		ptrPlaylist->setId(id);
		string cancion;
		getline(entrada,cancion);
		while(cancion.compare("end")!=0){
			for (int i = 0; i < canciones.size(); ++i){
				if (canciones[i]->getId().compare(cancion)==0){
					ptrPlaylist->addCancion(canciones[i]);
				}
			}
			getline(entrada,cancion);
			if(cancion.compare("")==0){
				final=true;
				break;
			}
		}
		if (final==true){
			break;
		}
	}
	playlists.pop_back();
	entrada.close();
}