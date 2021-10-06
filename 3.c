#include <stdio.h>

int main(){

    //Bloque de Declarativas
    int iniciador, contador, contadorA, contadorB, contadorC, contadorD, contadorF;
    float acumulador, promedio, porcentaje, max, min;
    float nota = 0;
    float porcentajeA, porcentajeB, porcentajeC, porcentajeD, porcentajeF;
    iniciador = 0;
    contador = 0;
    max = 0;
    min = 100;
    contador = 0;
    contadorA = 0;
    contadorB = 0;
    contadorC = 0;
    contadorD = 0;
    contadorF = 0;
    porcentaje = 0;
    acumulador = 0;

    //Bloque de Instrucciones
    while (iniciador != -1)
    {
    system ("cls");
    printf("Introduzca el promedio del alumno:");
    scanf("%f", &nota);

    contador = contador + 1;
    acumulador = acumulador + nota;

        if ((nota<=100) && (nota >= 91)){
            contadorA = contadorA + 1;
        }
            else if ((nota>=81) && (nota<=90)){
            contadorB = contadorB + 1;
            }
            else if ((nota>=71) && (nota<=80)){
            contadorC = contadorC + 1;
            }
            else if ((nota>60) && (nota<71)){
            contadorD = contadorD + 1;
            }
            else if ((nota<=60) && (nota>=0) ){
            contadorF = contadorF + 1;
            }
            else if ((nota<0) || (nota>100)){
                printf("Ha introducido un n%cmero incorrecto\n", 163);
            }
        if ((nota<min) && (nota>=0)){
        min = nota;
}
        else if ((nota>max) && (nota>=0)){
        max = nota;
    }
    printf("Presione 0 para continuar, presione -1 para terminar programa:");
    scanf("%i", &iniciador);
    }
    system("cls");
    promedio = acumulador/contador;
    porcentajeA = (contadorA*100)/contador;
    porcentajeB = (contadorB*100)/contador;
    porcentajeC = (contadorC*100)/contador;
    porcentajeD = (contadorD*100)/contador;
    porcentajeF = (contadorF*100)/contador;

    printf("El promedio es de %.2f\n", promedio);
    printf("La nota m%cs alta fue de: %.2f\n",160, max);
    printf("La nota m%cs baja fue de: %.2f\n",160, min);
    printf("Las notas de A son %i, el %.2f%c\n", contadorA, porcentajeA, 37);
    printf("Las notas de B son %i, el %.2f%c\n", contadorB, porcentajeB, 37);
    printf("Las notas de C son %i, el %.2f%c\n", contadorC, porcentajeC, 37);
    printf("Las notas de D son %i, el %.2f%c\n", contadorD, porcentajeD, 37);
    printf("Las notas de F son %i, el %.2f%c\n", contadorF, porcentajeF, 37);
    
}