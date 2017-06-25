#include "Spotify.h"
#include <vector>
#include <typeinfo>

Spotify::Spotify(){

}

void Spotify::run(){
	vector<Cancion*> canciones;
	vector<Cuenta*> cuentas;
	Cuenta* usuarioActual;
	for (int i = 0; i < 5; ++i)
	{
		Region* region = new Socialista("Honduras",12);
		canciones.push_back(new Radio("Wicked Game",4,0,0,region,"Juan"));
	}
	cuentas.push_back(new Cuenta_normal("Oswal","osw","123",&cuentas));
	cuentas.push_back(new Cuenta_premium("Jorge","jor","123",&cuentas));
	cuentas.push_back(new Cuenta_premium("Alessandro","ale","123",&cuentas));
	vector<Artista*> artistas;
	artistas.push_back(new Artista("Oasis"));
	Artista* pArtista=artistas[0];
	vector<Album*> albumes;
	albumes.push_back(new Album("Live"));
	albumes[0]->setCanciones(canciones);
	pArtista->setAlbumes(albumes);

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
				if (respuestaGlobal.compare("6")){
					clear();
				}
				if (respuestaGlobal.compare("7")){
					clear();
				}
			}else{//Si la cuenta no existe
				//Si se quiere salir del programa por completo
				if (rUsuario.compare("salir")==0||rPassword.compare("salir")==0){
					opc=1;
				}else{
					clear();
					mvprintw(10,5,"Error en usuario o contraseña, presione una tecla para continuar.");
					getch();
				}
			}
		} while (respuestaGlobal.compare("7")!=0);
		clear();
	endwin();//Se finaliza la ventana de ncurses
} while (opc==0);
}