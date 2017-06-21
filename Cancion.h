#include <iostream>
#include <string>
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
    Region region; 
    string artista
public:
    Cancion(string,int,int,int,Region,string);
    Cancion();

    string getNombre();
    void setNombre(string);

    int getDuracion();
    void setDuracion(int);

    int getReproducciones();
    void setReproducciones(int);

    int getFavorito();
    void setFavorito(int);

    string getArtista();
    void setArtista(string);

    

    virtual void Reproducir();
    virtual void Favorited();

};
#endif