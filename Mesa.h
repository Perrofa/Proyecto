#ifndef MESA_H
#define MESA_H
#include "Silla.h"

class Mesa{
  // Atributos del objeto 
  private:
  bool mesaVip;
  int cantidadSillas;
  Silla miSilla;

// Metodos del objeto
  public: 
    //getters
    bool getMesaVip();
    int getCantidadSillas();

    //setters
    void setMesaVip(bool);
    void setCantidadSillas(int);

    //constructor
    Mesa(bool, int, Silla);
};

// Constructor 
Mesa::Mesa(bool _mesaVip, int _cantidadSillas, Silla _miSilla ) {
  mesaVip = _mesaVip;
  cantidadSillas = _cantidadSillas;
  miSilla = _miSilla;
}
bool Mesa::getMesaVip(){
  return mesaVip;
}
int Mesa::getCantidadSillas(){
  return cantidadSillas;
}

void Mesa::setMesaVip(bool _mesaVip){
  mesaVip = _mesaVip;
}

void Mesa::setCantidadSillas(int _cantidadSillas){
  cantidadSillas = _cantidadSillas;
}



#endif

