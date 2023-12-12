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


  