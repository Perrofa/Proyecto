# A01412171 Alan Herrera Martínez

## Corecciones:
### Cambio: Se cambio calificación de pregunta y el despliegue de preguntas para el uso de listas anidadas.</p>
### Subcompetencia: Separa el código en funciones pequeñas reusables, haciendo uso correcto de paso por parametros y return (avance 3)
<p>Se implemento el uso de funciones para calificar la respuesta y tambien para imprimir los resultados.</p>

### Referencia: Ninguna.</p>

~~~

def calificar_respueta(num_pregunta, respuesta, puntaje):
  if(num_pregunta == 1):
    if respuesta == "si":
      puntaje = puntaje + 1
    else:
      puntaje = puntaje - 1  

  elif (num_pregunta == 2):
    if respuesta == "no":
      puntaje = puntaje + 1
    else:
      puntaje = puntaje - 1

  elif (num_pregunta == 3):
    if respuesta == "si":
      puntaje = puntaje + 1
    else:
      puntaje = puntaje - 1

  elif (num_pregunta == 4):
    if respuesta == "si":
      puntaje = puntaje + 1
    else:
      puntaje = puntaje - 1

  elif (num_pregunta == 5):
    if respuesta == "no":
      puntaje = puntaje + 1
    else:
      puntaje = puntaje - 1
      
  elif (num_pregunta == 6):
    if respuesta == "si":
      puntaje = puntaje + 1
    else:
      puntaje = puntaje - 1
  return puntaje

def printResultados():
  #print("#          Username          Score")
  for jugador in jugadores:
    #print("jugador numero " + str(jugador[0]) + " => " + jugador[1] + " => obtuviste un puntaje de: " + str(jugador[2]))
    #print(str(jugador[0]) + "          " + jugador[1] + "         " + str(jugador[2]))
    print("Jugador numero: " + str(jugador[0]))
    print("Username: " + jugador[1])
    print("Puntaje: " + str(jugador[2]))
    print("======================================================================================")
    
~~~

## Contexto:
<p>A la hora de pensar sobre que podria hacer como parte de mi trabajo a futuro decidi intentar hacer un juego, escogi
un juego de preguntas el cual a mi punto de vista podria ser un reto para mi persona, es algo sencillo para empezar pero 
en este momento es lo mejor. El juego que escogi fue por que quise empezar a crear mas juegos para poder hagarrar
practica mas en este ambito. las skins del juego al igual que el sonido si me dejan usare el del juego, si no usare unas
que esten disponibles por que honestamente hacer esto mismo me quedaria mal y seria muy pesado. Lo escogi por me parece 
interesante el poder crecer en algo en lo que carezco.</p> 

## Pseudocodigo:


~~~

Eo (respuesta)


   Escribir "¿El presidente de Mexico es Andres Manuel Lopez Obrador?"
   
   mostrar respuesta
  
   si respuesta es igual a "si" entonces 
   
     Escribir "¿Benito Juarez era muy alto?"
     
     mostrar respuesta
      
   si respuesta es igual a "si" entonces
     
     Escribir "¿Es un pollo el logo de la bandera de Mexico?
       
     mostrar respuesta
      
   si respuesta es igual a "si" entonces
        
     Escribir "¿El dia son 24 horas?"
       
   si respuesta es igual a "si" entonces
       
     Escribir "Ganaste"
         
   si no
       
     Escribir "Perdiste"
         
   si no
       
     Escribir "Perdiste"
       
   si no
     
     Escribir "Perdiste"
       
   
~~~

