//#include "Casa.h"
#include "Inmueble.h"

int main() {
    Inmueble * a = new Inmueble();
    //Inmueble * a = new Casa();
    a->vender();
    a->calcularArea();
    a->calcularPrecio();

    return 0;
}
