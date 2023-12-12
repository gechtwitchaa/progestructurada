#include <stdio.h>
#include <string.h>


union Dato {
    int entero;
    float flotante;
    char cadena[50];
};

int main() {
    
    union Dato dato;

