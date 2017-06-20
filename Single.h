#include <iostream>
#include <string>
#include "Album.h"

using namespace std;

#ifndef SINGLE_H
#define SINGLE_H

class Single:public Album{
protected:
public:
	Single(string);
	Single();
};
#endif