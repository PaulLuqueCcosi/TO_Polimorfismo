#include <iostream>
#include "Inmueble.h"

Inmueble::Inmueble()
{
  area = 0;
  precioOriginal = 0;
  direccion = "No definida";
}

Inmueble::Inmueble(int area, int precioOriginal, std::string direccion)
{
  this->area = area;
  this->precioOriginal = precioOriginal;
  this->direccion = direccion;
}

double Inmueble::calcularArea()
{
  return this->area;
}

double Inmueble::calcularPrecio()
{
  std::cout << "Calculando precio de inmueble" << std::endl;
  return 0;
}

void Inmueble::vender()
{
  std::cout << "Vendiendo inmueble" << std::endl;
}
