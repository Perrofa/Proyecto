#ifndef COMIDA_H
#define COOMIDA_H
#include "Platillo.h"

class Comida: private Platillo {
  // Atributos del objeto 
  private:
    int gramos;
  // Metodos del objeto
  public:
    //getters
    int getGramos();

    //setters
    void setGramos(int);
    Comida();
    Comida(int);
};
// Constructor default
Comida::Comida(){
  gramos=0;
}
// Constructor 
Comida::Comida(int _gramos){
  gramos = _gramos; 
}
int Comida::getGramos(){
  return gramos;
}
void Comida::setGramos(int _gramos){
  gramos= _gramos;
}

#endif