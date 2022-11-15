#include <string>

#ifndef INMUEBLE_H
#define INMUEBLE_H

class Inmueble
{
public:
  Inmueble(int area, int precioOriginal, std::string direccion);

  double calcularArea();
  double calcularPrecio();
  void vender();

protected:
  int area;
  int precioOriginal;
  std::string direccion;
};

#endif
