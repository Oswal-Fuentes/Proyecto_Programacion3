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

using namespace std;

int main(){
	cout<<"Prueba"<<endl;
	return 0;
}

/*
	vector<Cancion> vCancion;
	vector<Album> vAlbum;
	vector<Playlist> vPlaylist;
	vector<Cuenta> vCuenta;
	vector<Artista> vArtista;
	vector<Region> vRegion;
	vector<Dispositivo> vDispositivo;
	vector<Persona> vPersona;
	int opcMenu;
	do{
		cout<<"Menú"<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Listar"<<endl;
		cout<<"3. Modificar"<<endl;
		cout<<"4. Eliminar"<<endl;
		cout<<"5. Guardar en archivos de texto"<<endl;
		cout<<"6. Leer de archivos de texto"<<endl;
		cout<<"7. Guardar en binarios"<<endl;
		cout<<"7. Leer de binarios"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Ingrese opción: "<<endl;
		cin>>opcMenu;
		switch(opcMenu){
			case 1:{
				cout<<"Menú agregar"<<endl;
				cout<<"1. Cancion"<<endl;
				cout<<"2. Album"<<endl;
				cout<<"3. Playlist"<<endl;
				cout<<"4. Cuenta"<<endl;
				cout<<"5. Artista"<<endl;
				cout<<"6. Region"<<endl;
				cout<<"7. Dispositivo"<<endl;
				cout<<"8. Persona"<<endl;
				int opcAgregar;
				cout<<"Ingrese la opción: ";
				cin>>opcAgregar;
				switch(opcAgregar){
					case 1:{
						string nombre;
						cout<<"Ingrese nombre: ";
						cin>>nombre;
						int duracion;
						cout<<"Ingrese duracion: ";
						cin>>duracion;
						int reproducciones;
						cout<<"Ingrese reproducciones: ";
						cin>>reproducciones;
						int favorito;
						cout<<"Ingrese favorito: ";
						cin>>favorito;
						Cancion temporal(nombre,duracion,reproducciones,favorito,);
						vCancion.push_back(temporal);
						break;
					}
					case 2:{
						string nombre;
						cout<<"Ingrese nombre: ";
						cin>>nombre;
						Album temporal(nombre,);
						vAlbum.push_back(temporal);
						break;
					}
					case 3:{
						string nombre;
						cout<<"Ingrese nombre: ";
						cin>>nombre;
						Playlist temporal(nombre,);
						vPlaylist.push_back(temporal);
						break;
					}
					case 4:{
						string nombre;
						cout<<"Ingrese nombre: ";
						cin>>nombre;
						string username;
						cout<<"Ingrese username: ";
						cin>>username;
						string password;
						cout<<"Ingrese password: ";
						cin>>password;
						Cuenta temporal(nombre,username,password,);
						vCuenta.push_back(temporal);
						break;
					}
					case 5:{
						Artista temporal();
						vArtista.push_back(temporal);
						break;
					}
					case 6:{
						string nombre;
						cout<<"Ingrese nombre: ";
						cin>>nombre;
						Region temporal(nombre,);
						vRegion.push_back(temporal);
						break;
					}
					case 7:{
						string ip;
						cout<<"Ingrese ip: ";
						cin>>ip;
						Dispositivo temporal(ip,);
						vDispositivo.push_back(temporal);
						break;
					}
					case 8:{
						int dinero;
						cout<<"Ingrese dinero: ";
						cin>>dinero;
						Persona temporal(dinero,);
						vPersona.push_back(temporal);
						break;
					}
				}
				break;
			}
			case 2:
			{
				cout<<"Menú listar"<<endl;
				cout<<"1. Cancion"<<endl;
				cout<<"2. Album"<<endl;
				cout<<"3. Playlist"<<endl;
				cout<<"4. Cuenta"<<endl;
				cout<<"5. Artista"<<endl;
				cout<<"6. Region"<<endl;
				cout<<"7. Dispositivo"<<endl;
				cout<<"8. Persona"<<endl;
				int opcListar;
				cout<<"Ingrese la opción: ";
				cin>>opcListar;
				switch(opcListar){
					case 1:
					for(int i=0;i<vCancion.size();i++){
						cout<<"nombre"<<" = "<<vCancion[i].getnombre();
						cout<<"duracion"<<" = "<<vCancion[i].getduracion();
						cout<<"reproducciones"<<" = "<<vCancion[i].getreproducciones();
						cout<<"favorito"<<" = "<<vCancion[i].getfavorito();
						cout<<endl;

					}break;
					case 2:
					for(int i=0;i<vAlbum.size();i++){
						cout<<"nombre"<<" = "<<vAlbum[i].getnombre();
						cout<<endl;

					}break;
					case 3:
					for(int i=0;i<vPlaylist.size();i++){
						cout<<"nombre"<<" = "<<vPlaylist[i].getnombre();
						cout<<endl;

					}break;
					case 4:
					for(int i=0;i<vCuenta.size();i++){
						cout<<"nombre"<<" = "<<vCuenta[i].getnombre();
						cout<<"username"<<" = "<<vCuenta[i].getusername();
						cout<<"password"<<" = "<<vCuenta[i].getpassword();
						cout<<endl;

					}break;
					case 5:
					for(int i=0;i<vArtista.size();i++){
						cout<<endl;

					}break;
					case 6:
					for(int i=0;i<vRegion.size();i++){
						cout<<"nombre"<<" = "<<vRegion[i].getnombre();
						cout<<endl;

					}break;
					case 7:
					for(int i=0;i<vDispositivo.size();i++){
						cout<<"ip"<<" = "<<vDispositivo[i].getip();
						cout<<endl;

					}break;
					case 8:
					for(int i=0;i<vPersona.size();i++){
						cout<<"dinero"<<" = "<<vPersona[i].getdinero();
						cout<<endl;

					}break;
				}
				break;
			}
			case 3:{
				break;
			}
			case 4:{
				break;
			}
			case 5:{
				break;
			}
		}
	}while(opcMenu!=8);
}
*/