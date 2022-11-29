#ifndef PLATILLO_H
#define PLATILLO_H

class Platillo{ 
   //Atributos del objeto
  private:
    double costo;

   //Metodos del objeto
    public:
    //getters
    double getCosto();
    
    //setters
    void setCosto(double);
    //cosntructor deafault
    Platillo();
    //constructor
    Platillo(double);
};
// Constructor default
Platillo::Platillo(){
  costo = 19.50;
}
// Constructor 
Platillo::Platillo(double _costo) {
  costo = _costo; 
}

double Platillo::getCosto(){
  return costo;
}

void Platillo::setCosto(double _costo){
  costo = _costo;
}


#endif