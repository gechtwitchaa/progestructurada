#include <stdio.h>


struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};


void imprimirEstudiantePorValor(struct Estudiante est) {
    printf("Nombre: %s\n", est.nombre);
    printf("Edad: %d\n", est.edad);
    printf("Promedio: %.2f\n", est.promedio);
}


void imprimirEstudiantePorReferencia(struct Estudiante *est) {
    printf("Nombre: %s\n", est->nombre);
    printf("Edad: %d\n", est->edad);
    printf("Promedio: %.2f\n", est->promedio);
}


void imprimirEstudiantePorDireccion(struct Estudiante *est) {
    printf("Nombre: %s\n", (*est).nombre);
    printf("Edad: %d\n", (*est).edad);
    printf("Promedio: %.2f\n", (*est).promedio);
}

int main() {
    struct Estudiante estudiante = {"Alberto", 18, 8};


    printf("Imprimir por valor:\n");
    imprimirEstudiantePorValor(estudiante);

    printf("\nImprimir por referencia:\n");
    imprimirEstudiantePorReferencia(&estudiante);

    printf("\nImprimir por dirección:\n");
    imprimirEstudiantePorDireccion(&estudiante);

    return 0;
}
