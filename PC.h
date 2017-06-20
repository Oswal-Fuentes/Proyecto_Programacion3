#include <iostream>
#include <string>
#include "Dispositivo.h"

using namespace std;

#ifndef PC_H
#define PC_H

class PC:public Dispositivo{
protected:
public:
	PC(string);
	PC();
};
#endif