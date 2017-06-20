#include <iostream>
#include <string>
#include "Album.h"

using namespace std;

#ifndef ALBUM_COMPLETO_H
#define ALBUM_COMPLETO_H

class Album_completo:public Album{
protected:
public:
	Album_completo(string);
	Album_completo();
	
	void dibujarPortada();
};
#endif