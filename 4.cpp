#include <stdio.h>
#include <string.h>


struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};


typedef struct Estudiante EstudianteAlias;

int main() {

    EstudianteAlias estudiante1;


    strcpy(estudiante1.nombre, "Alberto");
    estudiante1.edad = 18;
    estudiante1.promedio = 8;


 