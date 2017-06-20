#include <iostream>
#include <string>
#include "Cuenta.h"

using namespace std;

#ifndef CUENTA_PREMIUM_H
#define CUENTA_PREMIUM_H

class Cuenta_premium:public Cuenta{
protected:
public:
	Cuenta_premium(string,string,string);
	Cuenta_premium();

	void agregar_a_Favoritos();
	void agregar_a_Historial();
	void agregar_a_Playlist();
	void comprarPremium();
	void cancelarSuscripcion();
	void borrarCuenta();
};
#endif