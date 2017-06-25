#include <iostream>
#include <string>
#include "Region.h"

using namespace std;

#ifndef CANCION_H
#define CANCION_H

class Cancion{ 
protected:
    string id;
    string nombre;
    string artista;
    int duracion;
    int reproducciones=0;
    int favorito;
public:

    Cancion(string,string,string,int,int,int);
    Cancion();

    string getId();

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
    virtual string getTipo();

    friend ostream& operator<<(ostream& salida,Cancion& cancion){
        return salida<<
                cancion.id<<endl<<
                cancion.getTipo()<<endl<<
                cancion.nombre<<endl<<
                cancion.artista<<endl<<
                cancion.duracion<<endl<<
                cancion.reproducciones<<endl<<
                cancion.favorito<<endl;
    }

};
#endif