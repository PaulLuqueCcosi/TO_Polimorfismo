#include <iostream>
#include "Departamento.h"

Departameto::Departameto(int area, int precioOriginal, std::string direccion, int piso) {
  Inmueble(area, precioOriginal, direccion);
  this->piso = piso;
}

Departameto::Departameto()
{
  Inmueble();
  this->piso = 0;

}

void Departameto::vender(){
  std::cout << "Vendiendo Departameto" << std::endl;
}

double Departameto::calcularArea(){
  return this->area;
}

double Departameto::calcularPrecio(){
  std::cout << "Calculando precio de Departameto" << std::endl;
  return 0;
}

