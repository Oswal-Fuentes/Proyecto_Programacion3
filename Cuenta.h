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
    Persona* persona;
    vector<Cuenta*>* perteneceA;
    vector<Cancion*> favoritos;
    vector<Cancion*> historial;
    vector<Playlist*> playlists;
public:
    Cuenta(string,string,string,int,string);
    Cuenta();
    ~Cuenta();

    string getNombre();
    void setNombre(string);

    string getUsername();
    void setUsername(string);

    string getPassword();
    void setPassword(string);

    void setPersona(Persona*);
    Persona* getPersona();

    vector<Cancion*> getFavoritos();
    void setFavoritos(vector<Cancion*>);

    vector<Cancion*> getHistorial();
    void setHistorial(vector<Cancion*>);

    vector<Playlist*> getPlaylists();
    void setPlaylists(vector<Playlist*>);

    void addFavorito(Cancion*);
    void addHistorial(Cancion*);
    void addPlaylist(Playlist*);

    virtual void agregar_a_Favoritos(Cancion*)=0;
    virtual void verHistorial()=0;
    virtual void agregar_a_Playlist(Cancion*)=0;
    virtual void cambiarTipo()=0;
    virtual void cancelarSuscripcion()=0;
    virtual void borrarCuenta()=0;
    virtual void reproducir(vector<Cancion*>)=0;
    virtual string getTipo();


    friend ostream& operator<<(ostream& salida,Cuenta& cuenta){
        string textofavoritos="";
        for (int i = 0; i < cuenta.getFavoritos().size(); ++i){
            textofavoritos+=cuenta.getFavoritos()[i]->getId()+'\n';
        }
        textofavoritos+="end";
        string textohistorial="";
        for (int i = 0; i < cuenta.getHistorial().size(); ++i){
            textohistorial+=cuenta.getHistorial()[i]->getId()+'\n';
        }
        textohistorial+="end";
        string textoplaylists="";
        for (int i = 0; i < cuenta.getPlaylists().size(); ++i){
            textoplaylists+=cuenta.getPlaylists()[i]->getId()+'\n';
        }
        textoplaylists+="end";
        return salida<<
        cuenta.getTipo()<<endl<<
        cuenta.nombre<<endl<<
        cuenta.username<<endl<<
        cuenta.password<<endl<<
        cuenta.persona->getId()<<endl<<
        textofavoritos<<endl<<
        textohistorial<<endl<<
        textoplaylists<<endl;
    }
};
#endif