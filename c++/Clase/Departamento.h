#include <string>
#include "Inmueble.h"
#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

class Departameto : public Inmueble{
private:
  int piso;

public:
  Departameto(int area, int precioOriginal, std::string direccion,int piso);
  Departameto();
  void vender();
  double calcularArea();
  double calcularPrecio();
};

#endif
