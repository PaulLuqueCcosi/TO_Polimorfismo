#ifndef CASA_H
#define CASA_H
#include "Inmueble.h"
#include <string>

class Casa : public Inmueble {
  private:
    int numPisos;
    int numHabitaciones;

  public:
    Casa(int area, int precioOriginal, std::string direccion, int numPisos, int numHabitaciones);

    void vender();
    double calcularArea();
    double calcularPrecio();


};

#endif