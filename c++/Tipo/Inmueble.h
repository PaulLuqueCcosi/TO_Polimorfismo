#include <string>

#ifndef INMUEBLE_H
#define INMUEBLE_H

class Inmueble
{
public:
  // Inmueble(int area, int precioOriginal, std::string direccion);
  virtual double calcularArea() = 0;
  virtual double calcularPrecio() = 0;
  virtual void vender() = 0 ;

};

#endif
