#A01412171 Alan Herrera Martínez.

"""
description: funcion para calificar preguntas
params:num:pregunta, respuesta, puntaje
return: puntaje
"""
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
     

puntaje = 0
respuesta = ""
jugadores = 0
preguntas= [": El presidente de Mexico es Andres Manuel Lopez Obrador? (si/no)",
            ": Benito Juarez era muy alto? (si/no)",
            ": El arcoiris tiene 7 colores? (si/no)",
            ": El borrego del Tec se llama Teus? (si/no)",
            ": Una lista es inmutable? (si/no)",
            ": Final Fantasy es el mejor juego del mundo? (si/no)"]


print("Cuantos jugadores son?")
jugadores = int(input())

while jugadores != 0:
  puntaje = 0
  
  print("Jugador " + str(jugadores) + preguntas[0])
  respuesta = input()
  puntaje = calificar_respueta(1,respuesta, puntaje)
  
  print("Jugador " + str(jugadores) + preguntas[1])
  respuesta = input()
  puntaje = calificar_respueta(2,respuesta,puntaje)

  print("Jugador " + str(jugadores) + preguntas[2])
  respuesta = input()
  puntaje = calificar_respueta(3,respuesta,puntaje)

  print("Jugador " + str(jugadores) + preguntas[3])
  respuesta = input()
  puntaje = calificar_respueta(4,respuesta,puntaje)

  print("Jugador " + str(jugadores) + preguntas[4])
  respuesta = input()
  puntaje = calificar_respueta(5,respuesta,puntaje)

  print("Jugador " + str(jugadores) + preguntas[5])
  respuesta = input()
  puntaje = calificar_respueta(6,respuesta,puntaje)
  
  print("Jugador " + str(jugadores) + " Puntuaje es igual a " + str(puntaje))
  print("======================================================================================")
  jugadores = jugadores - 1
  



