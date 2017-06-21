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
<<<<<<< HEAD
    Cancion(string,int,int,int,Region);
=======
    Cancion(string,int,int,int,Region,string);
>>>>>>> 993ffd19f58d1106d043c1f22493f9306a7f0ae5
    Cancion();

    string getNombre();
    void setNombre(string);

    int getDuracion();
    void setDuracion(int);

    int getReproducciones();
    void setReproducciones(int);

    int getFavorito();
    void setFavorito(int);

<<<<<<< HEAD
=======
    string getArtista();
    void setArtista(string);

    

>>>>>>> 993ffd19f58d1106d043c1f22493f9306a7f0ae5
    virtual void Reproducir();
    virtual void Favorited();

};
#endif