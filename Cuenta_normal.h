#include <iostream>
#include <string>
#include "Cuenta.h"

using namespace std;

#ifndef CUENTA_NORMAL_H
#define CUENTA_NORMAL_H

class Cuenta_normal:public Cuenta{
protected:
public:
	Cuenta_normal(string,string,string);
	Cuenta_normal();	

	void agregar_a_Favoritos(Cancion*);
    void verHistorial();
    void agregar_a_Playlist(Cancion*);
    void cambiarTipo();
    void cancelarSuscripcion();
    void borrarCuenta();
    void reproducir(vector<Cancion*>);
};
#endif