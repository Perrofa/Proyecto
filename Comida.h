#ifndef COMIDA_H
#define COOMIDA_H
#include "Platillo.h"

class Comida: public Platillo {
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
    Comida(int, std::string,double);
};
// Constructor default
Comida::Comida(){
  gramos=0;
}
// Constructor 
Comida::Comida(int _gramos, std::string _nombre, double _costo):Platillo(_costo,_nombre){
  gramos = _gramos;

}
int Comida::getGramos(){
  return gramos;
}
void Comida::setGramos(int _gramos){
  gramos= _gramos;
}

#endif