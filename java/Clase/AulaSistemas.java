package Clase;

public class AulaSistemas extends Aula {

    String horario;

    public AulaSistemas(int capacidad, String codigo, boolean disponible, String curso) {
        super(capacidad, codigo, disponible);
        this.curso = curso;
    }

    @Override
    public void reservar() {
        System.out.println("Reservando aula de sistemas");
        System.out.printf("Codigo del aula %s \n", codigo);
        
    }

    @Override
    public void liberar() {
        System.out.println("Liberando aula de sistemas");
        
        
    }
    
}
