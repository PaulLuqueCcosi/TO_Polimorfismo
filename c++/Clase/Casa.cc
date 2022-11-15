#include <iostream>
#include "Casa.h"

Casa::Casa(int area, int precioOriginal, std::string direccion, int numPisos, int numHabitaciones)
{
  
  this->area = area;
  this->precioOriginal = precioOriginal;
  this->direccion = direccion;
  this->numPisos = numPisos;
  this->numHabitaciones = numHabitaciones;
}

Casa::Casa()
{
  this->area = 0;
  this->precioOriginal = 0;
  this->direccion = "";
  this->numPisos = 0;
  this->numHabitaciones = 0;
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

