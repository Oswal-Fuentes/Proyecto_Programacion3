#include <iostream>
#include <string>
#include "Album.h"

using namespace std;

#ifndef RECOPILATORIO_H
#define RECOPILATORIO_H

class Recopilatorio:public Album{
protected:
public:
	Recopilatorio(string);
	Recopilatorio();
};
#endif