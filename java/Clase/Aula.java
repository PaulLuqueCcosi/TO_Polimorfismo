package Clase;

public abstract class Aula {
    int capacidad;
    String codigo;
    boolean disponible;
    String curso;

    public Aula(int capacidad, String codigo, boolean disponible) {
        this.capacidad = capacidad;
        this.codigo = codigo;
        this.disponible = disponible;
    }

    public abstract void reservar();
    public abstract void liberar();

    public boolean isDisponible() {
        return disponible;
    }
}
