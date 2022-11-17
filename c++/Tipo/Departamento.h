#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include "Inmueble.h"
#include <string>

class Departamento : public Inmueble
{
private:
  int piso;
  int area;

public:
  Departamento(int area, int piso);

  double calcularArea();
  double calcularPrecio();
  void vender();
};

#endif