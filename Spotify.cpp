#include "Spotify.h"
#include <vector>
#include <typeinfo>

Spotify::Spotify(){

}

void Spotify::run(){
	vector<Cuenta*> cuentas;
	Cuenta* usuarioActual;
	//Personas
	vector<Persona*> personas;
	personas.push_back(new Persona("1",0));
	personas.push_back(new Persona("2",1));
	//Canciones
	vector<Cancion*> canciones;
	canciones.push_back(new Explicit("1","Toxicity","System Of A Down",3,0,0));
	canciones.push_back(new Radio("2","B.Y.O.B","System Of A Down",4,0,0));
	canciones.push_back(new Cover("3","A Tout Le Monde","Megadeth",4,0,0));
	canciones.push_back(new Explicit("4","Hangar 18","Megadeth",3,0,0));
	canciones.push_back(new Radio("5","Stairway To Heaven","Led Zeppelin",5,0,0));
	canciones.push_back(new Cover("6","Immigrant Song","Led Zeppelin",4,0,0));
	//Cuentas
	cuentas.push_back(new Cuenta_normal("Oswal","osw","123",&cuentas));
	cuentas.push_back(new Cuenta_premium("Jorge","jor","123",&cuentas));
	cuentas.push_back(new Cuenta_premium("Alessandro","ale","123",&cuentas));
	//Artistas
	vector<Artista*> artistas;
	artistas.push_back(new Artista("System Of A Down"));
	artistas.push_back(new Artista("Megadeth"));
	artistas.push_back(new Artista("Led Zeppelin"));
	Artista* pArtista1=artistas[0];
	Artista* pArtista2=artistas[1];
	Artista* pArtista3=artistas[2];
	//Albums
	vector<Album*> albumes;
	albumes.push_back(new Album("Toxicity"));
	albumes.push_back(new Album("Mezmerize"));
	albumes.push_back(new Album("Youthanasia"));
	albumes.push_back(new Album("Rust In Peace"));
	albumes.push_back(new Album("Led Zeppelin IV"));
	albumes.push_back(new Album("Led Zeppelin III"));
	albumes[0]->setCanciones(canciones);
	albumes[1]->setCanciones(canciones);
	albumes[2]->setCanciones(canciones);
	albumes[3]->setCanciones(canciones);
	albumes[4]->setCanciones(canciones);
	albumes[5]->setCanciones(canciones);
	pArtista1->setAlbumes(albumes);
	pArtista1->setAlbumes(albumes);
	pArtista2->setAlbumes(albumes);
	pArtista2->setAlbumes(albumes);
	pArtista3->setAlbumes(albumes);
	pArtista3->setAlbumes(albumes);
	albumes[0]->setId("1");
	albumes[1]->setId("2");
	albumes[0]->addCancion(canciones[0]);
	albumes[0]->addCancion(canciones[0]);
	albumes[0]->addCancion(canciones[1]);
	albumes[1]->addCancion(canciones[1]);
	albumes[1]->addCancion(canciones[0]);
	albumes[1]->addCancion(canciones[1]);
	artistas[0]->addAlbum(albumes[0]);
	artistas[0]->addAlbum(albumes[0]);
	artistas[0]->addAlbum(albumes[1]);
	
	artistas[1]->addAlbum(albumes[1]);
	artistas[1]->addAlbum(albumes[0]);
	artistas[1]->addAlbum(albumes[1]);

	artistas[0]->addPersona(personas[0]);
	artistas[0]->addPersona(personas[0]);
	artistas[0]->addPersona(personas[1]);
	
	artistas[1]->addPersona(personas[1]);
	artistas[1]->addPersona(personas[0]);
	artistas[1]->addPersona(personas[1]);
	//Playlists
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

	int opc=0;
	do{
		char respuesta[1000];
		/*Esta variable se usa para leer las respuestas de usuario con getstr() que sólo puede
		guardar las respuestas en un arreglo de char.*/
		
		initscr();//Se inicia la pantalla de ncurses
		mvprintw(2,5,"¡Bienvenido a Spotify!");
		mvprintw(3,5,"Ingrese sus datos,");
		mvprintw(4,5,"o (salir) en Usuario o Contraseña para cerrar el programa.");

		//se lee el usuario
		mvprintw(5,5,"Ingrese usuario: ");
		getstr(respuesta);
		string rUsuario(respuesta);

		//se lee el password
		mvprintw(6,5,"Ingrese password: ");
		getstr(respuesta);
		string rPassword(respuesta);

		//se valida la cuenta
		bool existeUsuario=false;
		bool existeCuenta=false;
		for (int i = 0; i < cuentas.size(); i++){
			if (rUsuario.compare(cuentas[i]->getUsername())==0){
				existeUsuario=true;
			}
			if (rPassword.compare(cuentas[i]->getPassword())==0){
				existeCuenta=true;
			}
			if (existeUsuario==true&&existeCuenta==true){
				usuarioActual=cuentas[i];
				break;
			}	
		}
		string respuestaGlobal;
		string respuestaTemporal;

		do{
			respuestaGlobal='7';
			if (existeUsuario==true&&existeCuenta==true){//Si la cuenta existe
				clear();
				//Menú principal
				mvprintw(5,5,"1. Artista");
				mvprintw(6,5,"2. Playlists");
				mvprintw(7,5,"3. Favoritos");
				mvprintw(8,5,"4. Historial");
				mvprintw(9,5,"5. Opciones");
				mvprintw(10,5,"6. Tendencias");
				mvprintw(11,5,"7. Cerrar sesión");
				mvprintw(12,5,"Ingrese la opción que desea: ");
				getstr(respuesta);
				respuestaGlobal=respuesta;
				if (respuestaGlobal.compare("1")==0){//Submenú artistas
						//Artistas
					clear();
					for (int i = 0; i < artistas.size(); ++i){
						mvprintw(5+i,5,to_string(i).c_str());
						mvprintw(5+i,7,artistas[i]->getNombre().c_str());
					}
					mvprintw(5+artistas.size()+1,5,"Escoja el artista que desea: ");
					getstr(respuesta);
					Artista* artistaActual=artistas[atoi(respuesta)];
					artistaActual->Pagar();
						//Albumes
					clear();
					vector<Album*> albumesActuales;
					albumesActuales=artistaActual->getAlbumes();
					for (int i = 0; i < albumesActuales.size(); ++i){
						mvprintw(5+i,5,to_string(i).c_str());
						mvprintw(5+i,7,albumesActuales[i]->getNombre().c_str());
					}
					mvprintw(5+albumesActuales.size()+1,5,"Escoja el album que desea: ");
					getstr(respuesta);
					Album* albumActual=albumesActuales[atoi(respuesta)];
						//Canciones
					clear();
					vector<Cancion*> cancionesActuales;
					cancionesActuales=albumActual->getCanciones();
					usuarioActual->reproducir(cancionesActuales);
				}
				if (respuestaGlobal.compare("2")==0){
					clear();
					for (int i = 0; i < canciones.size(); ++i){
						mvprintw(5+i,5,to_string(i).c_str());
						mvprintw(5+i,7,canciones[i]->getNombre().c_str());
					}
					mvprintw(5+canciones.size()+1,5,"Ingrese la canción que desea: ");
					getstr(respuesta);
					int pos=atoi(respuesta);
					Cancion* cancionActual;
					cancionActual=canciones[pos];
					usuarioActual->agregar_a_Playlist(cancionActual);
				}
				if (respuestaGlobal.compare("3")==0){
					clear();
					for (int i = 0; i < canciones.size(); ++i){
						mvprintw(5+i,5,to_string(i).c_str());
						mvprintw(5+i,7,canciones[i]->getNombre().c_str());
					}
					mvprintw(5+canciones.size()+1,5,"Ingrese la canción que desea: ");
					getstr(respuesta);
					int pos=atoi(respuesta);
					Cancion* cancionActual;
					cancionActual=canciones[pos];
					usuarioActual->agregar_a_Favoritos(cancionActual);
				}
				if (respuestaGlobal.compare("4")==0){
					usuarioActual->verHistorial();
				}
				if (respuestaGlobal.compare("5")==0){
					clear();
					mvprintw(5,5,"Menú de Opciones");
					mvprintw(6,5,"1. Cambiar tipo");
					mvprintw(7,5,"2. Cancelar suscripción");
					mvprintw(8,5,"3. Borrar cuenta");
					mvprintw(9,5,"4. Salir");
					mvprintw(10,5,"Ingrese la opción que desea: ");
					getstr(respuesta);
				}
				if (respuestaGlobal.compare("6")==0){//Tendencias
					clear();
					vector<Cancion*>global_temp;
					vector<Cancion*>socialista_temp;
					mvprintw(5,5,"Escoja al region: ");
					mvprintw(6,5,"1. Global");
					mvprintw(7,5,"2. Socialista");
					mvprintw(8,5,"3. Democratica");
					mvprintw(9,5,"Ingrese la opción que desea: ");
					getstr(respuesta);
					string temp_resp=respuesta;
					if(temp_resp.compare("1")==0){
						for(int i=100000;i>=0;i--){
							for(int j=0;j<canciones.size();j++){
								if(canciones[j]->getReproducciones()==i){
									global_temp.push_back(canciones[i]);
								}
							}
						}
						clear();
						for (int i = 0; i < global_temp.size(); ++i){
							mvprintw(5+i,5,to_string(i).c_str());
							mvprintw(5+i,7,canciones[i]->getNombre().c_str());
						}
						mvprintw(5+canciones.size()+1,5,"Ingrese la canción que desea reproducir: ");
						getstr(respuesta);
						int pos=atoi(respuesta);
						canciones[pos]->Reproducir();
					}
					if(temp_resp.compare("2")==0){
						for(int i=100000;i>=0;i--){
							for(int j=0;j<canciones.size();j++){
								if(canciones[j]->getReproducciones()==i){
									if(canciones[j]->getTipo()!="Explicit"){
										socialista_temp.push_back(canciones[i]);
									}
								}
							}
						}
						clear();
						for (int i = 0; i < socialista_temp.size(); ++i){
							mvprintw(5+i,5,to_string(i).c_str());
							mvprintw(5+i,7,canciones[i]->getNombre().c_str());
						}
						mvprintw(5+canciones.size()+1,5,"Ingrese la canción que desea reproducir: ");
						getstr(respuesta);
						int pos=atoi(respuesta);
						canciones[pos]->Reproducir();
					}
					if(temp_resp.compare("3")==0){
						for(int i=100000;i>=0;i--){
							for(int j=0;j<canciones.size();j++){
								if(canciones[j]->getReproducciones()==i){
									global_temp.push_back(canciones[i]);
								}
							}
						}
						clear();
						for (int i = 0; i < global_temp.size(); ++i){
							mvprintw(5+i,5,to_string(i).c_str());
							mvprintw(5+i,7,canciones[i]->getNombre().c_str());
						}
						mvprintw(5+canciones.size()+1,5,"Ingrese la canción que desea reproducir: ");
						getstr(respuesta);
						int pos=atoi(respuesta);
						canciones[pos]->Reproducir();
					}
				}
				if (respuestaGlobal.compare("7")){
					clear();
				}
			}else{//Si la cuenta no existe
				//Si se quiere salir del programa por completo
				if (rUsuario.compare("salir")==0||rPassword.compare("salir")==0){
					opc=1;
				}else if(rUsuario.compare("cargar")||rPassword.compare("cargar")){
					string ruta;
					ruta="./canciones.txt";
					recuperarCanciones(ruta,canciones);
					ruta="./personas.txt";
					recuperarPersonas(ruta,personas);
					ruta="./playlists.txt";
					recuperarPlaylists(ruta, playlists,canciones);
					ruta="./albumes.txt";
					recuperarAlbumes(ruta,albumes, canciones);
					ruta="./artistas.txt";
					recuperarArtistas(ruta, artistas, albumes, personas);
					/*void recuperarCuentas(string &,vector<Cuenta*> &,
						vector<Cancion*>&,vector<Playlist*>&,vector<Persona*>&);*/
				}else{//Si no existen los datos que ingresó
					clear();
					mvprintw(10,5,"Error en usuario o contraseña, presione una tecla para continuar.");
					getch();
				}
			}
		} while (respuestaGlobal.compare("7")!=0);
		clear();
	endwin();//Se finaliza la ventana de ncurses
} while (opc==0);
	//Guardar en archivos

ofstream archivo;
string ruta;

	/*CANCIONES*/
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

	/*PERSONAS*/
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

	/*PLAYLISTS*/
ruta="./playlists.txt";
archivo.open(ruta.c_str(),ios::out);

		//Si el archivo falla
if (archivo.fail()){
	cout<<"No se puede abrir el archivo"<<endl;
}

for (int i = 0; i < playlists.size(); ++i){
	archivo<<*playlists[i];
}
archivo.flush();
archivo.close();

	/*ALBUMS*/
ruta="./albumes.txt";
archivo.open(ruta.c_str(),ios::out);

		//Si el archivo falla
if (archivo.fail()){
	cout<<"No se puede abrir el archivo"<<endl;
}

for (int i = 0; i < albumes.size(); ++i){
	archivo<<*albumes[i];
}
	//archivo<<"endOfFile";
archivo.flush();
archivo.close();

	/*ARTISTAS*/
ruta="./artistas.txt";
archivo.open(ruta.c_str(),ios::out);

		//Si el archivo falla
if (archivo.fail()){
	cout<<"No se puede abrir el archivo"<<endl;
}

for (int i = 0; i < artistas.size(); ++i){
	archivo<<*artistas[i];
}
	//archivo<<"endOfFile";
archivo.flush();
archivo.close();

	//Liberación de memoria
for (int i = 0; i < canciones.size(); ++i){
	delete canciones[i];
}
for (int i = 0; i < cuentas.size(); ++i){
	delete cuentas[i];
}
for (int i = 0; i < artistas.size(); ++i){
	delete artistas[i];
}
for (int i = 0; i < albumes.size(); ++i){
	delete albumes[i];
}
delete usuarioActual;
}


void recuperarCanciones(string &ruta,vector<Cancion*> &canciones){
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

void recuperarPersonas(string &ruta,vector<Persona*> &personas){
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


void recuperarAlbumes(string &ruta,vector<Album*> &albumes,vector<Cancion*>&canciones){
	ifstream entrada;
	entrada.open(ruta,ios::in);
	bool final=false;
	while (!entrada.eof()){
		//Se leen los atributos
		string id;
		getline(entrada,id);
		string nombre;
		getline(entrada,nombre);
		albumes.push_back(new Album(nombre));
		//Se obtiene el album
		Album* ptrAlbum=albumes[albumes.size()-1];
		ptrAlbum->setId(id);
		string cancion;
		getline(entrada,cancion);
		while(cancion.compare("end")!=0){
			for (int i = 0; i < canciones.size(); ++i){
				if (canciones[i]->getId().compare(cancion)==0){
					ptrAlbum->addCancion(canciones[i]);
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
	albumes.pop_back();
	entrada.close();
}

void recuperarArtistas(string &ruta,vector<Artista*> &artistas,vector<Album*>&albumes,vector<Persona*>&personas){
	ifstream entrada;
	entrada.open(ruta,ios::in);
	bool final=false;
	while (!entrada.eof()){
		//Se leen los atributos
		string nombre;
		getline(entrada,nombre);
		artistas.push_back(new Artista(nombre));
		//Se obtiene el artista
		Artista* ptrArtista=artistas[artistas.size()-1];
		string album;
		getline(entrada,album);
		while(album.compare("end")!=0){
			for (int i = 0; i < albumes.size(); ++i){
				if (albumes[i]->getId().compare(album)==0){
					ptrArtista->addAlbum(albumes[i]);
				}
			}
			if(album.compare("")==0){
				final=true;
				break;
			}
			getline(entrada,album);
		}
		if (final==true){
			break;
		}
		string persona;
		getline(entrada,persona);
		while(persona.compare("end")!=0){
			for (int i = 0; i < personas.size(); ++i){
				if (personas[i]->getId().compare(persona)==0){
					ptrArtista->addPersona(personas[i]);
				}
			}
			if(album.compare("")==0){
				final=true;
				break;
			}
			getline(entrada,album);
		}
	}
	artistas.pop_back();
	entrada.close();
}
