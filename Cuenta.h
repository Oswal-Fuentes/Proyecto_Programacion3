#include <iostream>
#include <string>
#include <vector>
#include "Favoritos.h"
#include "Playlist.h"
#include "Cancion.h"

using namespace std;

#ifndef CUENTA_H
#define CUENTA_H

class Cuenta{
protected:
    string nombre;
    string username;
    string password;
    vector<Favoritos*>favoritos;
    vector<Cancion*>historial;
    vector<Playlist*>playlists;
public:
    Cuenta(string,string,string);
    Cuenta();

    string getNombre();
    void setNombre(string);

    string getUsername();
    void setUsername(string);

    string getPassword();
    void setPassword(string);

    vector<Favoritos*> getFavoritos();
    void setFavoritos(vector<Favoritos*>);

    vector<Cancion*> getHistorial();
    void setHistorial(vector<Cancion*>);

    vector<Playlist*> getPlaylists();
    void setPlaylists(vector<Playlist*>);

    virtual void agregar_a_Favoritos()=0;
    virtual void agregar_a_Historial()=0;
    virtual void agregar_a_Playlist()=0;
    virtual void comprarPremium()=0;
    virtual void cancelarSuscripcion()=0;
    virtual void borrarCuenta()=0;  
};
#endif