#include <iostream>
#include "Inmueble.h"
#include "Departamento.h"

Departamento::Departamento(int area, int piso) {
    this->area = area;
    this->piso = piso;
}

void Departamento::vender(){
  std::cout << "Vendiendo Departamento" << std::endl;
}

double Departamento::calcularArea(){
  return this->area;
}

double Departamento::calcularPrecio(){
  std::cout << "Calculando precio del Departamento" << std::endl;
  return 0;
}

