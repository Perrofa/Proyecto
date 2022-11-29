#ifndef Silla_H
#define Silla_H
#include <string>

class Silla{
  // Atributos del objeto 
  private:
  std::string color;

// Metodos del objeto
  public: 
    //getters
    std::string getColor();

    //setters
    void setColor(std::string);

    //constructor default
    Silla();
    //constructor
    Silla(std::string);
};

// Constructor default
Silla::Silla() {
  color = "cafe";
}

Silla::Silla(std::string _color) {
  color = _color;
}

 std::string Silla::getColor(){
  return color;
}

void Silla::setColor(std::string _color){
  color = _color;
}



#endif
