#ifndef CASA_H
#define CASA_H
#include "Inmueble.h"
#include <string>

class Casa : public Inmueble
{
private:
  int numPisos;
  int numHabitaciones;
  int area;

public:
  Casa(int area, int numPisos, int numHabitaciones);

  double calcularArea();
  double calcularPrecio();
  void vender();
};

#endif