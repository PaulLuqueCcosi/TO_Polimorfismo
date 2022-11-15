#include <iostream>
#include "Inmueble.h"
#include "Casa.h"

Casa::Casa(int area, int numPisos, int numHabitaciones) {
    this->area = area;
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
  return 0;
}

