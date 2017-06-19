#include <iostream>
#include <string>

using namespace std;

#ifndef CUENTA_H
#define CUENTA_H
class Cuenta{
    protected:
        string nombre;
        string username;
        string password;
    public:
        Cuenta(string,string,string);
        Cuenta();
        
        string getNombre();
        void setNombre(string);

        string getUsername();
        void setUsername(string);

        string getPassword();
        void setPassword(string);

};
#endif