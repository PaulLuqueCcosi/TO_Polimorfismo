#include "Casa.h"
#include <iostream>

Casa::Casa(int area, int precioOriginal, std::string direccion, int numPisos, int numHabitaciones) : Inmueble(area, precioOriginal, direccion)
{
    this->numPisos = numPisos;
    this->numHabitaciones = numHabitaciones;
}

void Casa::vender(){
  std::cout << "Vendiendo casa" << std::endl;
}

double Casa::calcularArea(){
  return this->area;
}

double Casa::calcularPrecio(){
  std::cout << "Calculando precio de casa" << std::endl;
}

