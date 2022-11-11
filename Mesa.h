#ifndef MESA_H
#define MESA_H


class Mesa{
  // Atributos del objeto 
  private:
  bool mesaVip;
  int sillas;

// Metodos del objeto
  public: 
    //getters
    bool getMesaVip();
    int getSillas();

    //setters
    void setMesaVip(bool);
    void setSillas(int);

    //constructor
    Mesa(bool, int);
};

// Constructor 
Mesa::Mesa(bool _mesaVip, int _sillas) {
  mesaVip = _mesaVip;
  sillas = _sillas;
}
bool Mesa::getMesaVip(){
  return mesaVip;
}
int Mesa::getSillas(){
  return sillas;
}

void Mesa::setMesaVip(bool _mesaVip){
  mesaVip = _mesaVip;
}

void Mesa::setSillas(int _sillas){
  sillas = _sillas;
}



#endif

