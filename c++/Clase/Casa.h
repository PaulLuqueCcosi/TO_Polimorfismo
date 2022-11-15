#include "Inmueble.h"
#ifndef CASA_H
#define CASA_H
#include <string>

class Casa{
private:
  int numPisos;
  int numHabitaciones;

  int area;
  int precioOriginal;
  std::string direccion;

public:
  Casa(int area, int precioOriginal, std::string direccion, int numPisos, int numHabitaciones);
  Casa();
  void vender();
  double calcularArea();
  double calcularPrecio();
};

#endif
