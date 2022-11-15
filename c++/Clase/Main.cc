#include "Casa.h"
#include "Inmueble.h"

int main(int argc, char const *argv[])
{
    //Inmueble * a = new Inmueble();
    Casa * a = new Casa();
    a->vender();
    a->calcularArea();
    a->calcularPrecio();
    return 0;
}
