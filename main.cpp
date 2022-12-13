/*
 * Proyecto restaurante
 * Alan Herrera Martínez
 * A01412171
 * 12/12/2022
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
#include "Combo.h"
#include "Pedido.h"

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


}