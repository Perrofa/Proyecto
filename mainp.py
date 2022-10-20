#A01412171 Alan Herrera Martínez.



def calificar_respueta(num_pregunta, respuesta, puntaje):
  
  """
  description: funcion para calificar preguntas
  params:num:pregunta, respuesta, puntaje
  return: puntaje
  """

  if respuesta == preguntas[num_pregunta][1]:
    puntaje = puntaje + 1
  else:
    puntaje = puntaje - 1  

  return puntaje



def printResultados():

  """
  description: funcion para imprimir resultados
  """

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
preguntas= [[": El presidente de Mexico es Andres Manuel Lopez Obrador? (si/no)", "si"],
            [": Benito Juarez era muy alto? (si/no)", "no"],
            [": El arcoiris tiene 7 colores? (si/no)", "si"],
            [": El borrego del Tec se llama Teus? (si/no)", "si"],
            [": Una lista es inmutable? (si/no)", "no"],
            [": Final Fantasy es el mejor juego del mundo? (si/no)", "si"]]

if __name__ == '__main__':
  print("Cuantos jugadores son?")
  num_jugadores = int(input())

  while num_jugadores != 0:
    puntaje = 0

    print("Jugador " + str(num_jugadores) + ": Cual es tu username?")
    nombre = input()
    for i in range(6):
      print("Jugador " + str(num_jugadores) + preguntas[i][0])
      respuesta = input()
      puntaje = calificar_respueta(i,respuesta, puntaje)
        
    jugadores.append([num_jugadores,nombre,puntaje])
    
    print("======================================================================================")
    num_jugadores = num_jugadores - 1

  printResultados()


