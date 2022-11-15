#include "Casa.h"
#include "Inmueble.h"

int main() {
    Inmueble * a = new Casa();
    //Casa * a = new Casa();
    a->vender();
    a->calcularArea();
    a->calcularPrecio();

    return 0;
}
