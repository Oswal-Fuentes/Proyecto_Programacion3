#include <iostream>
#include <string>
#include "Region.h"

using namespace std;

#ifndef PAIS_H
#define PAIS_H

class Pais:public Region{
protected:
public:
	Pais(string);
	Pais();
};
#endif