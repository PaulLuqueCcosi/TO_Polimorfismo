package Tipo;

public class Main {

    public static void main(String[] args) {

        Vehiculo v1 = new Bicicleta();
        Vehiculo v2 = new Carro();
        Vehiculo v3 = new UnaPersonaCorriendo("Joaquin");

        v1.acelerar();
        v1.frenar();
        v1.encender();
        v2.acelerar();
        v2.frenar();
        v2.encender();

        // joaquin aunque no sea como tal un vehiculo
        v3.acelerar();
        v3.frenar();
        v3.encender();
    }
}
