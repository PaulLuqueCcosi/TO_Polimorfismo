#include <string>

#ifndef INMUEBLE_H
#define INMUEBLE_H

class Inmueble
{
public:
  Inmueble(int area, int precioOriginal, std::string direccion);
  Inmueble();
  virtual double calcularArea();
  virtual double calcularPrecio();
  virtual void vender();

protected:
  int area;
  int precioOriginal;
  std::string direccion;
};

#endif
