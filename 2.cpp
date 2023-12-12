#include <stdio.h>
#include <string.h>


union Dato {
    int entero;
    float flotante;
    char cadena[50];
};

int main() {

    union Dato dato;


    dato.entero = 10;
    printf("Valor entero: %d\n", dato.entero);

    dato.flotante = 3.14;
    printf("Valor flotante: %.2f\n", dato.flotante);

    strcpy(dato.cadena, "Hola, mundo!");
    printf("Valor cadena: %s\n", dato.cadena);

    return 0;
}
