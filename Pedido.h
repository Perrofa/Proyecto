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
  double total;
  std::string contenido;
// Metodos del objeto
  public: 
    //getters
    std::vector<Comida> getComida_c();
    std::vector<Bebida> getBebida_c();
    std::vector<Combo> getCombo_c();
    double getTotal();
    std::string getContenido_c();
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
  total = 0.0;
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
double Pedido::getTotal(){
  return total;
}
std::string Pedido::getContenido_c(){
  return contenido;
}
void Pedido::addComida_c(Comida _comida_c){
  comida_c.push_back(_comida_c);
  total = total + _comida_c.getCosto();
  contenido = contenido + " " + _comida_c.getNombre();
}
void Pedido::addBebida_c(Bebida _bebida_c){
  bebida_c.push_back(_bebida_c);
  total = total + _bebida_c.getCosto();
  contenido = contenido + " " + _bebida_c.getNombre();
}
void Pedido::addCombo_c(Combo _combo_c){
  combo_c.push_back(_combo_c);
  total = total + _combo_c.getCosto();
  contenido = contenido + " " + _combo_c.getNombre();
}


#endif
