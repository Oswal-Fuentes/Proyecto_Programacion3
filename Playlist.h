#include <iostream>
#include <string>

using namespace std;

#ifndef PLAYLIST_H
#define PLAYLIST_H

class Playlist{
    protected:
        string nombre;
    public:
        Playlist(string);
        Playlist();

        string getNombre();
        void setNombre(string);

};
#endif