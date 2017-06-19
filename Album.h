#include <iostream>
#include <string>

using namespace std;

#ifndef ALBUM_H
#define ALBUM_H
class Album{
    protected:
        string nombre;
    public:
        Album(string);
        Album();
        string getNombre();
        void setNombre(string);

};
#endif