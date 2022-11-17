#include "Casa.h"
#include "Inmueble.h"
#include "Departamento.h"

int main(int argc, char const *argv[])
{
    Inmueble* a = new Casa(1000, 10, 10);
    Inmueble* b = new Departamento(1000, 10);

    a->vender();
    a->calcularArea();
    a->calcularPrecio();
    
    b->vender();
    b->calcularArea();
    b->calcularPrecio();
    return 0;
}
