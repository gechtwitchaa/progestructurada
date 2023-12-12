#include <stdio.h>
#include <string.h>


struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

struct Estudiante copiarEstudiante(struct Estudiante original) {
    struct Estudiante copia;
    strcpy(copia.nombre, original.nombre);
    copia.edad = original.edad;
    copia.promedio = original.promedio;
    return copia;
}

int main() {

    struct Estudiante estudianteOriginal = {"Alberto", 18, 8};


    struct Estudiante copiaEstudiante = copiarEstudiante(estudianteOriginal);


    printf("Datos del estudiante original:\n");
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n", estudianteOriginal.nombre, estudianteOriginal.edad, estudianteOriginal.promedio);

    printf("\nDatos del estudiante copiado:\n");
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n", copiaEstudiante.nombre, copiaEstudiante.edad, copiaEstudiante.promedio);

    return 0;
}
