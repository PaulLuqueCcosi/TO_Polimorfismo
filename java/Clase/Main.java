package Clase;

public class Main {
    public static void main(String[] args) {
        Aula aulaSistemas = new AulaSistemas(35, "IS301", true, null);
        Aula aulaLab = new AulaLAboratorios(25, "ISLAb301", true, 25);

        aulaLab.reservar();
        aulaSistemas.reservar();
        aulaLab.liberar();
        aulaSistemas.liberar();

    }
}
