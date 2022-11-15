//#include "Casa.cc"
#include "Inmueble.cc"

int main(int argc, char const *argv[])
{
    Inmueble * a = new Inmueble();
    a->vender();
    a->calcularArea();
    a->calcularPrecio();
    return 0;
}
