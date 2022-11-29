#ifndef BEBIDA_H
#define BEBIDA_H
#include "Platillo.h"

class Bebida: private Platillo { 
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

    Bebida(bool, int);
};

// Constructor 
Bebida::Bebida(bool _hielos, int _mililitros) {
  hielos = _hielos;
  mililitros = _mililitros; 
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