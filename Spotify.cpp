#include "Spotify.h"
#include <vector>
#include <typeinfo>

Spotify::Spotify(){

}

void Spotify::run(){
	vector<Cuenta*> cuentas;
	Cuenta* usuarioActual;
	cuentas.push_back(new Cuenta_normal("Oswal","osw","123"));
	cuentas.push_back(new Cuenta_premium("Jorge","jor","123"));
	cuentas.push_back(new Cuenta_premium("Alessandro","ale","123"));
	vector<Artista*> artistas;
	int opc=0;
	do{
		/* code */

		char respuesta[1000];
		initscr();//Se inicia la pantalla de ncurses
		
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
			if (existeUsuario==true&&existeCuenta==true){//Si existe la cuenta
				clear();
				string bienvenida;
				bienvenida="Le damos la bienvenida ";
				bienvenida+=usuarioActual->getNombre();
				//Menú principal
				mvprintw(0,5,"Es una cuenta normal, algunas de las funciones no están disponibles.");
				mvprintw(2,5,bienvenida.c_str());
				mvprintw(5,5,"1. Artista");
				mvprintw(6,5,"2. Playlists");
				mvprintw(7,5,"3. Favoritos");
				mvprintw(8,5,"4. Historial");
				mvprintw(9,5,"5. Opciones");
				mvprintw(10,5,"6. Tendencias");
				mvprintw(10,5,"7. Cerrar sesión");
				mvprintw(11,5,"Ingrese la opción que desea: ");
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
				}
		}else{//Si la cuenta no existe
			mvprintw(10,5,"Error en usuario o contraseña");
		}
	} while (respuestaGlobal.compare("6")!=0);
	clear();
	endwin();//Se finaliza la ventana de ncurses
	
} while (opc!=0);
}