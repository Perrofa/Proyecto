#ifndef COMIDA_H
#define COOMIDA_H
#include "Platillo.h"

class Comida: private Platillo {
  // Atributos del objeto 
  private:
    bool queso;
    bool peperoni;
    bool jamon;
    bool carne;
  // Metodos del objeto
  public:
    //getters
    bool getQueso();
    bool getPeperoni();
    bool getJamon();
    bool getCarne();
    //setters
    void setQueso(bool);
    void setPeperoni(bool);
    void setJamon(bool);
    void setCarne(bool);
    Comida(bool, bool, bool,bool);
};

// Constructor 
Comida::Comida(bool _queso, bool _peperoni , bool _jamon, bool _carne) {
  queso = _queso;
  peperoni = _peperoni;
  jamon = _jamon;
  carne = _carne;
}

bool Comida::getQueso(){
  return queso;
}
bool Comida::getPeperoni(){
  return peperoni;
  
}bool Comida::getJamon(){
  return jamon;
  
}bool Comida::getCarne(){
  return carne;
}

void Comida::setQueso(bool _queso){
  queso = _queso;
}
void Comida::setPeperoni(bool _peperoni){
  peperoni = _peperoni;
}
void Comida::setJamon(bool _jamon){
  jamon = _jamon;
}
void Comida::setCarne(bool _carne){
  carne = _carne;
}


#endif