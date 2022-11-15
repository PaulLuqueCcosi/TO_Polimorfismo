#include "Casa.h"
#include "Inmueble.h"
int main(int argc, char const *argv[])
{
    Inmueble a = Casa(100, 1000000, "Calle 1", 2, 3);
    a.vender();
    a.calcularArea();
    a.calcularPrecio();
    return 0;
}
