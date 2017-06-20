#include <iostream>
#include <string>
#include "Playlist.h"

using namespace std;

#ifndef FAVORITOS_H
#define FAVORITOS_H

class Favoritos:public Playlist{
protected:
public:
	Favoritos(string);
	Favoritos();
};
#endif