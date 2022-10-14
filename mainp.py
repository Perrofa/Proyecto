#A01412171 Alan Herrera Martínez.

"""
description: funcion para calificar preguntas
params:num:pregunta, respuesta, puntaje
return: puntaje
"""

def calificar_respueta(num_pregunta, respuesta, puntaje):
  if (num_pregunta == 1):
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

"""
description: funcion para imprimir resultados
"""

def printResultados():
  #print("#          Username          Score")
  for jugador in jugadores:
    #print("jugador numero " + str(jugador[0]) + " => " + jugador[1] + " => obtuviste un puntaje de: " + str(jugador[2]))
    #print(str(jugador[0]) + "          " + jugador[1] + "         " + str(jugador[2]))
    print("Jugador numero: " + str(jugador[0]))
    print("Username: " + jugador[1])
    print("Puntaje: " + str(jugador[2]))
    print("======================================================================================")

     
"""
Variables
"""
puntaje = 0
respuesta = ""
num_jugadores = 0
jugadores = []
preguntas= [": El presidente de Mexico es Andres Manuel Lopez Obrador? (si/no)",
            ": Benito Juarez era muy alto? (si/no)",
            ": El arcoiris tiene 7 colores? (si/no)",
            ": El borrego del Tec se llama Teus? (si/no)",
            ": Una lista es inmutable? (si/no)",
            ": Final Fantasy es el mejor juego del mundo? (si/no)"]

if __name__ == '__main__':
  print("Cuantos jugadores son?")
  num_jugadores = int(input())

  while num_jugadores != 0:
    puntaje = 0

    print("Jugador " + str(num_jugadores) + ": Cual es tu username?")
    nombre = input()

    print("Jugador " + str(num_jugadores) + preguntas[0])
    respuesta = input()
    puntaje = calificar_respueta(1,respuesta, puntaje)
    
    print("Jugador " + str(num_jugadores) + preguntas[1])
    respuesta = input()
    puntaje = calificar_respueta(2,respuesta,puntaje)

    print("Jugador " + str(num_jugadores) + preguntas[2])
    respuesta = input()
    puntaje = calificar_respueta(3,respuesta,puntaje)

    print("Jugador " + str(num_jugadores) + preguntas[3])
    respuesta = input()
    puntaje = calificar_respueta(4,respuesta,puntaje)

    print("Jugador " + str(num_jugadores) + preguntas[4])
    respuesta = input()
    puntaje = calificar_respueta(5,respuesta,puntaje)

    print("Jugador " + str(num_jugadores) + preguntas[5])
    respuesta = input()
    puntaje = calificar_respueta(6,respuesta,puntaje)

    jugadores.append([num_jugadores,nombre,puntaje])
    
    print("======================================================================================")
    num_jugadores = num_jugadores - 1

  printResultados()

"""
Referencias: 
  API Python. (2022, 11 octubre). Python.org. Recuperado 13 de octubre de 2022, de https://www.python.org/
"""