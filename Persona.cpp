#include "Persona.h"

Persona::Persona(int dinero){
    this->dinero=dinero;
}
Persona::Persona(){

}void Persona::setDinero(int dinero){
   this-> dinero=dinero;
}
int Persona::getDinero(){
   return dinero;
}
