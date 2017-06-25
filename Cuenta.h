#include <iostream>
#include <string>
#include <vector>
#include <ncurses.h>
#include "Playlist.h"
#include "Cancion.h"
#include "Persona.h"

using namespace std;

#ifndef CUENTA_H
#define CUENTA_H

class Cuenta:public Persona{
protected:
    string nombre;
    string username;
    string password;
    Persona persona;
    vector<Cuenta*>* perteneceA;
    vector<Cancion*> favoritos;
    vector<Cancion*> historial;
    vector<Playlist*> playlists;
public:
    Cuenta(string,string,string,vector<Cuenta*>*,int,string);
    Cuenta();

    string getNombre();
    void setNombre(string);

    string getUsername();
    void setUsername(string);

    string getPassword();
    void setPassword(string);

    vector<Cancion*> getFavoritos();
    void setFavoritos(vector<Cancion*>);

    vector<Cancion*> getHistorial();
    void setHistorial(vector<Cancion*>);

    vector<Playlist*> getPlaylists();
    void setPlaylists(vector<Playlist*>);

    virtual void agregar_a_Favoritos(Cancion*)=0;
    virtual void verHistorial()=0;
    virtual void agregar_a_Playlist(Cancion*)=0;
    virtual void cambiarTipo()=0;
    virtual void cancelarSuscripcion()=0;
    virtual void borrarCuenta()=0;
    virtual void reproducir(vector<Cancion*>)=0;
};
#endif