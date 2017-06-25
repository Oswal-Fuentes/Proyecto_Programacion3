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
    int regionInt;//Este indica la region que puede ser 1=Democrática 2=Socialista
    string artista;
public:

    Cancion(string,int,int,int,int,string);
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

    friend ostream& operator<<(ostream& salida,Cancion& cancion){
        return salida<<
                cancion.nombre<<endl<<
                cancion.duracion<<endl<<
                cancion.reproducciones<<endl<<
                cancion.favorito<<endl<<
                cancion.regionInt<<endl<<
                cancion.artista<<endl;
    }

};
#endif