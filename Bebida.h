#ifndef BEBIDA_H
#define BEBIDA_H
#include "Platillo.h" 
#include <string>


class Bebida: public Platillo { 
   //Atributos del objeto
  private:
    int mililitros;
    bool hielos;
   //Metodos del objeto
    public:
    //getters
    bool getHielos();
    int getMililitros();

    //setters
    void setMililitros(int);
    void setHielos(bool);
    //default 
    Bebida();
    //constructor de clase padre
    Bebida(std::string,double);
    Bebida(bool, int, std::string, double);
};
//Constructor default
Bebida::Bebida(){
  mililitros=0;
}
// Constructor 
Bebida::Bebida(bool _hielos, int _mililitros, std::string _nombre, double _costo) {
  hielos = _hielos;
  mililitros = _mililitros;
  nombre = _nombre;
  costo = _costo;
}

bool Bebida::getHielos(){
  return hielos;
}
int Bebida::getMililitros(){
  return mililitros;
}

void Bebida::setHielos(bool _hielos){
  hielos = _hielos;
}

void Bebida::setMililitros(int _mililitros){
  mililitros = _mililitros;
}


#endif