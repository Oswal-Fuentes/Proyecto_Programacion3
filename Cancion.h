#include <iostream>
#include <string>

using namespace std;

#ifndef CANCION_H
#define CANCION_H

class Cancion{ 
protected:
    string nombre;
    int duracion;
    int reproducciones=0;
    int favorito;
public:
    Cancion(string,int,int,int);
    Cancion();

    string getNombre();
    void setNombre(string);

    int getDuracion();
    void setDuracion(int);

    int getReproducciones();
    void setReproducciones(int);

    int getFavorito();
    void setFavorito(int);

    virtual void Reproducir();
    virtual void Favorited();

};
#endif