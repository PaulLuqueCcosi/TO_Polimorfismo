package Tipo;

public class UnaPersonaCorriendo implements Vehiculo {

    String name;

    public UnaPersonaCorriendo(String name) {
        this.name = name;
    }

    @Override
    public void acelerar() {
        System.out.printf("%s esta Acelerando\n" , name);   
    }

    @Override
    public void frenar() {
        System.out.printf("%s esta Frenando\n" , name);
        
    }

    @Override
    public void encender() {
        System.out.printf("%s esta Encendiendo\n" , name);
        
    }

}
