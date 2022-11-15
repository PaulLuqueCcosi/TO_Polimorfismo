package Clase;

public class AulaLAboratorios extends Aula {
    int numeroMaquinas;

    public AulaLAboratorios(int capacidad, String codigo, boolean disponible, int numeroMaquinas) {
        super(capacidad, codigo, disponible);
        this.numeroMaquinas = numeroMaquinas;
    }


    @Override
    public void reservar() {
        System.out.println("reserando aula de laboratorio");
        
    }

    @Override
    public void liberar() {
        System.out.println("Liberando aula de laboratorio");
        
    }


}
