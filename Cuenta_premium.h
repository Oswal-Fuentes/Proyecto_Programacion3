#include <iostream>
#include <string>
#include "Cuenta.h"

using namespace std;

#ifndef CUENTA_PREMIUM_H
#define CUENTA_PREMIUM_H

class Cuenta_premium:public Cuenta{
protected:
public:
	Cuenta_premium(string,string,string,vector<Cuenta*>*);
	Cuenta_premium();

	void agregar_a_Favoritos(Cancion*);
    void verHistorial();
    void agregar_a_Playlist(Cancion*);
    void cambiarTipo();
    void cancelarSuscripcion();
    void borrarCuenta();
    void reproducir(vector<Cancion*>);
};
#endif