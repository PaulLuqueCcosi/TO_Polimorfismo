#include "Casa.h"
#include "Inmueble.h"
#include "Departamento.h"

int main() {
    Inmueble * a = new Departameto();
    Inmueble * b = new Casa();
    Inmueble * c = new Inmueble();
    //Casa * a = new Casa();
    a->vender();
    a->calcularArea();
    a->calcularPrecio();

    b->vender();
    b->calcularArea();
    b->calcularPrecio();

    c->vender();
    c->calcularArea();
    c->calcularPrecio();

    return 0;
}
