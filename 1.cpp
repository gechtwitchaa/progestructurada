#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};


void imprimirEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

int main() {

    struct Estudiante estudiante1;


    strcpy(estudiante1.nombre, "Alberto");
    estudiante1.edad = 18;
    estudiante1.promedio = 8;


    struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));
    if (estudiante2 != NULL) {
        strcpy(estudiante2->nombre, "Eden");
        estudiante2->edad = 19;
        estudiante2->promedio = 9;
    }


    struct Estudiante *punteroEstudiante;
    punteroEstudiante = &estudiante1;


    struct Estudiante listaEstudiantes[10];


    listaEstudiantes[0] = estudiante1;
    listaEstudiantes[1] = *estudiante2;


    printf("Datos de los estudiantes en la lista:\n");
    imprimirEstudiante(listaEstudiantes[0]);
    imprimirEstudiante(listaEstudiantes[1]);

    listaEstudiantes[1] = estudiante1;
    free(estudiante2);

    return 0;
}
