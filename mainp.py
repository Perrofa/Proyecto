#A01412171 Alan Herrera Martínez 

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
  return puntaje
     

puntaje = 0
respuesta = ""
jugadores = 0



print("Cuantos jugadores son?")
jugadores = int(input())

while jugadores != 0:
  puntaje = 0
  
  print("Jugador " + str(jugadores) + ": El presidente de Mexico es Andres Manuel Lopez Obrador? (si/no)")
  respuesta = input()
  puntaje = calificar_respueta(1,respuesta, puntaje)
  
  print("Jugador " + str(jugadores) + ": Benito Juarez era muy alto?(si/no)")
  respuesta = input()
  puntaje = calificar_respueta(2,respuesta,puntaje)
  
  print("Jugador " + str(jugadores) + " Puntuaje es igual a " + str(puntaje))
  print("======================================================================================")
  jugadores = jugadores - 1
  



