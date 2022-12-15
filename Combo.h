#ifndef COMBO_H
#define COMBO_H
#include "Comida.h"
#include "Bebida.h"
#include "Platillo.h"
#include <string>

class Combo : public Platillo{
  // Atributos  del objeto 
  private:
  Comida comida_c;
  Bebida bebida_c;  

// Metodos del objeto
  public: 
    //getters
    Comida getComida_c();
    Bebida getBebida_c();

    //setters
    void setComida_c(Comida);
    void setBebida_c(Bebida);

    //constructor
    Combo(Comida, Bebida, std::string,double);
};

// Constructor 
Combo::Combo(Comida _comida_c, Bebida _bebida_c ,std::string _nombre ,double _costo):Platillo(_costo,_nombre) {
  comida_c = _comida_c;
  bebida_c = _bebida_c;

}
Comida Combo::getComida_c(){
  return comida_c;
}
Bebida Combo::getBebida_c(){
  return bebida_c;
}
void Combo::setComida_c(Comida _comida_c){
  comida_c = _comida_c;
}
void Combo::setBebida_c(Bebida _bebida_c){
  bebida_c = _bebida_c;
}
#endif

