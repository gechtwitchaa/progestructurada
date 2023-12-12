#include <stdio.h>
#include <string.h>


struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};


void inicializarEstudiante(struct Estudiante *est, const char *nombre, int edad, float promedio) {
    strcpy(est->nombre, nombre);
    est->edad = edad;
    est->promedio = promedio;
}


void imprimirEstudiante(struct Estudiante *est) {
    printf("Nombre: %s\n", est->nombre);
    printf("Edad: %d\n", est->edad);
    printf("Promedio: %.2f\n", est->promedio);
}

int main() {

    struct Estudiante juan;
    inicializarEstudiante(&juan, "Alberto", 18, 8);


    printf("Detalles del estudiante:\n");
    imprimirEstudiante(&juan);

    return 0;
}
