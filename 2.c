/*Algoritmo PromedioCamiones*/

#include <stdio.h>

int main()
{

    //Bloque de Declarativas
    int contador, iniciador;
    float camionesPeso, porcentaje, promedio, acumulador, camionesPorciento;
    contador = 0;
    iniciador = 0;
    camionesPeso = 0;
    acumulador = 0;
    float max = 0;
    float min = 1000;

    //Bloque de Instrucciones
    while (iniciador != -1)
    {
        printf("Introduzca el peso del camión:");
        scanf("%f", &camionesPeso);

        contador = contador + 1;
        acumulador = acumulador + camionesPeso;

        if ((camionesPeso < min) && (camionesPeso >= 0))
        {
            min = camionesPeso;
        }
        if (camionesPeso > max)
        {
            max = camionesPeso;
        }

        if (camionesPeso >= 15)
        {
            camionesPorciento = camionesPorciento + 1;
        }

        printf("Presione 0 para continuar, presione -1 para terminar programa:");
        scanf("%i", &iniciador);
    }

    promedio = acumulador / contador;
    porcentaje = (camionesPorciento * 100) / contador;

    printf("El promedio de peso de camiones es: %.2f", promedio);
    printf("\nEl porcentaje de camiones mayores o iguales a las 15 toneladas es de: %.2f", porcentaje);
    printf("\nEl máximo peso registrado es de: %.2f", max);
    printf("\nEl mínimo peso registrado fue de: %.2f", min);
    printf("\nLa cantidad de camiones es de: %i", contador);

    return 0;
}