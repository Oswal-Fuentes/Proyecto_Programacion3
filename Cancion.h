#include <iostream>
#include <string>
#include "Artista.h"
#include "Region.h"

using namespace std;

#ifndef CANCION_H
#define CANCION_H

class Cancion{ 
protected:
    string nombre;
    int duracion;
    int reproducciones=0;
    int favorito;
    Artista artista;
    Region region; 
public:
    Cancion(string,int,int,int,Artista,Region);
    Cancion();

    string getNombre();
    void setNombre(string);

    int getDuracion();
    void setDuracion(int);

    int getReproducciones();
    void setReproducciones(int);

    int getFavorito();
    void setFavorito(int);

    Artista getArtista();
    void setArtista(Artista);

    virtual void Reproducir();
    virtual void Favorited();

};
#endif