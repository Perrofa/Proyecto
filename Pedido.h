#ifndef PEDIDO_H
#define PEDIDO_H

#include "Combo.h"
#include <vector>

class Pedido{
  // Atributos del objeto 
  private:
  std::vector<Comida> comida_c;
  std::vector<Bebida> bebida_c;  
  std::vector<Combo> combo_c;
// Metodos del objeto
  public: 
    //getters
    std::vector<Comida> getComida_c();
    std::vector<Bebida> getBebida_c();
    std::vector<Combo> getCombo_c();

    //setters
    void addComida_c(Comida);
    void addBebida_c(Bebida);
    void addCombo_c(Combo);
    Pedido();
    //constructor

    double calcularCosto();
};
//Constructor default
Pedido::Pedido(){  
  comida_c =  std::vector<Comida>();
  bebida_c = std::vector<Bebida>();
  combo_c = std::vector<Combo>();
// Constructor 
  }
std::vector<Comida> Pedido::getComida_c(){
  return comida_c;
}
std::vector<Bebida> Pedido::getBebida_c(){
  return bebida_c;
}
std::vector<Combo> Pedido::getCombo_c(){
  return combo_c;
}
void Pedido::addComida_c(Comida _comida_c){
  comida_c.push_back(_comida_c);
}
void Pedido::addBebida_c(Bebida _bebida_c){
  bebida_c.push_back(_bebida_c);
}
  
#endif
