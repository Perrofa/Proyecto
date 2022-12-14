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
//#include "Comida.h" //donde estan los objetos de mi proyecto :).
//#include "Bebida.h"
#include "Combo.h"
#include "Pedido.h"

using namespace std;

int main(){
  // Crear menu

   //Bebidas
  Bebida agua(false,600,"Agua",10.00);
  Bebida refresco(true,600,"Refresco",12.50); 
  Bebida cafe(false,360,"Cafe",25.99 );
  //Comidas
  Comida pizza(350,"Pizza",99.99);
  Comida hamburguesa(175, "Hamburguesa", 75.00);
  Comida hotdog(45, "Hot Dog", 49.99);
  //Combos
  Combo individual(hotdog,refresco,"Combo Indivual", 55.99);
}