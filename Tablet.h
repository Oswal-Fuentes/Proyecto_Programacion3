#include <iostream>
#include <string>
#include "Dispositivo.h"

using namespace std;

#ifndef TABLET_H
#define TABLET_H

class Tablet:public Dispositivo{
protected:
public:
	Tablet(string);
	Tablet();
};
#endif