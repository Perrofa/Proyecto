/*
 * Proyecto restaurante
 * Alan Herrera Martínez
 * A01412171
 * 10/12/2022
 */

/**
 * Con este programa haré
 * diferentes tipos de ordenes en un retaurante
 * permite seleccionar la cantidad de ingredientes por alimento de acuerdo 
 * al gusto de cada cliente al igual que seleccionar la mesa adecuada.
*/

#include <iostream>   //para imprimir.
#include "Comida.h" //donde estan los objetos de mi proyecto :).
#include "Bebida.h"
#include "Mesa.h"

using namespace std;

int main(){
  Bebida refresco(false, 600);
  cout << " 0 = False, 1 = True" << endl;
  cout << "Bebida: refresco" << endl;
  //vemos si tiene hielos
  cout <<" Hielos: " <<  refresco.getHielos() << endl ;

  cout << "Agregando hielos" << endl;
  //le ponemos hielos
  refresco.setHielos(true);
  
  cout <<" Hielos: " <<  refresco.getHielos() << endl ;

  Comida pizza(false,false,false,false);
  pizza.setCarne(true);
  pizza.setJamon(false);
  pizza.setQueso(false);
  pizza.setPeperoni(true);

  cout << "Ingredientes de la pizza:" << endl;
  cout << "Carne: " << pizza.getCarne() << endl;
  cout << "Queso: " << pizza.getQueso() << endl;
  cout << "Jamon: " << pizza.getJamon() << endl;
  cout << "Peperoni: " << pizza.getPeperoni() << endl;
  
  Mesa mesa1(false, 4);

  mesa1.setMesaVip(true);
  mesa1.setSillas(10);

  mesa1.getMesaVip() ? cout << "La mesa es vip" << endl : cout << "la mesa es normal" << endl ;

  cout << "La mesa tiene " << mesa1.getSillas() << " sillas" << endl;
}