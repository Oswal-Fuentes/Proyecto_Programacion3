#include <iostream>
#include <string>

using namespace std;

#ifndef DISPOSITIVO_H
#define DISPOSITIVO_H

class Dispositivo{
protected:
	string ip;
public:
	Dispositivo(string);
	Dispositivo();
	
	string getIp();
	void setIp(string);

};
#endif