#include "Spotify.h"
#include <vector>

Spotify::Spotify(){

}

void Spotify::run(){
	vector<Cuenta*> cuentas;
	int usuarioActual;
	cuentas.push_back(new Cuenta_normal("Oswal","osw","123"));
	cuentas.push_back(new Cuenta_premium("Jorge","jor","123"));
	int opc=1;
	do{
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
		for (int i = 0; i < cuentas.size(); ++i){
			if (rUsuario.compare(cuentas[i]->getUsername())==0){
				existeUsuario=true;
			}
			if (rPassword.compare(cuentas[i]->getPassword())==0){
				existeCuenta=true;
			}
			if (existeUsuario==true&&existeCuenta==true){
				usuarioActual=i;
			}	
		}
		
		if (existeUsuario==true&&existeCuenta==true){//Si existe la cuenta
			clear();
			string bienvenida;
			bienvenida="Le damos la bienvenida ";
			bienvenida+=cuentas[usuarioActual]->getNombre();
			//Menú principal
			mvprintw(2,5,bienvenida.c_str());
			mvprintw(5,5,"1. Artista");
			mvprintw(6,5,"2. Playlists");
			mvprintw(7,5,"3. Favoritos");
			mvprintw(8,5,"4. Historial");
			mvprintw(9,5,"5. Opciones");
			mvprintw(10,5,"Ingrese la opción que desea: ");
			
			switch(){
				case 1:{
					break;
				}
			}
		}else{//Si la cuenta no existe
			mvprintw(7,5,"Error en usuario o contraseña");
		}
		
		endwin();//Se finaliza la ventana de ncurses

	} while (opc!=10);
}