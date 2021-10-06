#include <stdio.h>

int main (){

    //Bloque de Declarativas
    float producto, acumulador, impuesto, total;
    int contador = -1;
    producto = -1;
    #define ITBMS 0.07

    //Bloque de Instrucciones
    while (producto != 0){
    printf("Introduzca el precio del producto, presione 0 para terminar el programa:");
    scanf("%f", &producto);

    contador = contador + 1;
    acumulador = acumulador + producto;
    }
    impuesto = acumulador * ITBMS;
    total = acumulador + impuesto;
    printf("La cantidad de productos es de: %i\n", contador);
    printf("El sub-total es de: %c%.2f\n", 36, acumulador);
    printf("El impuesto es de: %c%.2f\n", 36, impuesto);
    printf("El total a pagar es de: %c%.2f", 36, total);

    return 0;
}