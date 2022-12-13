#ifndef PLATILLO_H
#define PLATILLO_H
#include <string>

class Platillo{ 
   //Atributos del objeto
  private:
    double costo;
    std::string nombre;

   //Metodos del objeto
    public:
    //getters
    double getCosto();
    std::string getNombre();
    
    //setters
    void setCosto(double);
    void setNombre(std::string);
    //cosntructor default
    Platillo();
    //constructor
    Platillo(double, std::string);
};
// Constructor default
Platillo::Platillo(){
  costo = 19.50;
}
// Constructor 
Platillo::Platillo(double _costo, std::string _nombre) {
  costo = _costo;
  nombre = _nombre;
}

double Platillo::getCosto(){
  return costo;
}

void Platillo::setCosto(double _costo){
  costo = _costo;
}
void Platillo::setNombre(std::string _nombre) {
  nombre= _nombre;
}
std::string Platillo::getNombre(){
  return nombre;
}

#endif