#include <iostream>
#include <string>

using namespace std;

#ifndef REGION_H
#define REGION_H
class Region{
    protected:
        string nombre;
    public:
        Region(string);
        Region();
        string getNombre();
        void setNombre(string);

};
#endif