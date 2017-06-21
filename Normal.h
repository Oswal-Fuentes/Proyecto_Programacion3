#include <iostream>
#include <string>
#include "Playlist.h"

using namespace std;

#ifndef NORMAL_H
#define NORMAL_H

class Normal:public Playlist{

protected:
	
public:
	Normal(string);
	Normal();
};
#endif