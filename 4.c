/**
 * Algoritmo GetMinorPriceForServerRack
 * A partir de 5 ofertas de racks para servidores, determina la oferta más baja
 * y la compara con la más alta.
 */
#include <stdio.h>

int main(void)
{
  /**
   * Bloque de variables de entrada
   */
  float currentRack;

  /**
   * Bloque de variables de control
   */
  int idx = 5;

  /**
   * Bloque de variables de salida
   */
  float minorRack = 0, majorRack = 0, difference;
  int minorRackId, majorRackId;

  /**
   * Bloque de Instrucciones
   */
  printf("¡Hola! Soy un algoritmo para ayudarle a determinar el menor precio \n");
  printf("en una lista de ofertas. Para iniciar, empecemos con las ofertas:\n");

  for (idx = 1; idx <= 5; idx++)
  {

    printf("  > Oferta No. %d: ", idx);
    scanf("%f", &currentRack);

    if (minorRack == 0 || currentRack < minorRack)
    {
      minorRack = currentRack;
      minorRackId = idx;
    }

    if (currentRack > majorRack)
    {
      majorRack = currentRack;
      majorRackId = idx;
    }
  }

  difference = majorRack - minorRack;

  printf("Perfecto, el producto con menor precio es el no. %d (B/. %.2f)\n", minorRackId, minorRack);
  printf("Comparándolo con el producto de mayor precio (el No. %d por B/. %.2f),\n", majorRackId, majorRack);
  printf("Tiene una diferencia de B./ %.2f\n", difference);
  printf("¡Buen día!\n");
  /**
   * Fin
   */
  return 0;
}