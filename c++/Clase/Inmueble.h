#include <string>

#ifndef INMUEBLE_H
#define INMUEBLE_H

class Inmueble
{
public:
  Inmueble(int area, int precioOriginal, std::string direccion);

  virtual double calcularArea();
  virtual double calcularPrecio();
  virtual void vender();

private:
  int area;
  int precioOriginal;
  std::string direccion;
};

#endif
