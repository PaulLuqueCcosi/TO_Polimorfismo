#include <string>
#include "Inmueble.h"
#ifndef CASA_H
#define CASA_H

class Casa : public Inmueble{
private:
  int numPisos;
  int numHabitaciones;

public:
  Casa(int area, int precioOriginal, std::string direccion, int numPisos, int numHabitaciones);
  Casa();
  void vender();
  double calcularArea();
  double calcularPrecio();
};

#endif
