/*
 * Proyecto restaurante
 * Alan Herrera Martínez
 * A01412171
 * 15/12/2022
 */

/**
 * Con este programa haré
 * pedidos en un restaurente donde podras consultar  
 * el total a pagar del pedido
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

  //Pedido

  Pedido pedido_p;
  cout<< pedido_p.getTotal() <<endl;
  cout<< pedido_p.getContenido_c() <<endl;
  pedido_p.addBebida_c(agua);
  pedido_p.addCombo_c(individual);
  pedido_p.addComida_c(pizza);
  cout<< pedido_p.getTotal() <<endl;
  cout<< pedido_p.getContenido_c() <<endl;
}