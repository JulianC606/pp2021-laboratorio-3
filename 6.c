#include <stdio.h>
//Programa de cambio de divisas hecho por Carlos Rodríguez
int main()
{
	//definimos el bloque de variables a usar
	//definimos el valor de las monedas a cambiar a dolar, lo separé en dos líneas para no tener que mover la pantalla para verlas.
	const float BOLIVARVENEZOLANO = 32738.48, DOLARCANADIENSE = 1.35, LIBRA = 0.78, PESOCOLOMBIANO = 3777.51;
	const float PESOMEXICANO = 21.98, YEN = 107.30, YUAN = 7.07, EURO = 0.88, REALBRASILENO = 5.06, PESOARGENTINO = 69.31;
	float cantidad, cantidadDolar;
	int menu, respuesta;

	//bloque de instrucciones
	do
	{
		printf("                  Casa de Cambio de Divisas               ");
		printf("\n            Aeropuerto Internacional de Tocumen          ");
		printf("\n        Bienvenido al sistema de cambio de divisas      \n");
		printf("\n Introduzca la cantidad en numeros de su divisa: ");
		scanf("%f", &cantidad);
		printf("\n          Menu ");
		printf("\n 1. Bolivar Venezolano ");
		printf("\n 2. Dolar Canadiense ");
		printf("\n 3. Libra ");
		printf("\n 4. Peso Colombiano ");
		printf("\n 5. Peso Mexicano ");
		printf("\n 6. Yen ");
		printf("\n 7. Yuan ");
		printf("\n 8. Euro ");
		printf("\n 9. Real Brasileno ");
		printf("\n 10 Peso Argentino ");
		printf("\n Introduzca el numero del menu que corresponda con su divisa: ");
		scanf("%d", &menu);
		// Se hacen las converiones a dolar según la opción que haya escogido el cliente
		switch (menu)
		{
		case 1:
			cantidadDolar = cantidad / BOLIVARVENEZOLANO;
			printf("\n Su cantidad en dolar es de: $%0.10f", cantidadDolar);
			break;

		case 2:
			cantidadDolar = cantidad / DOLARCANADIENSE;
			printf("\n Su cantidad en dolar es de: $%0.10f", cantidadDolar);
			break;

		case 3:
			cantidadDolar = cantidad / LIBRA;
			printf("\n Su cantidad en dolar es de: $%0.10f", cantidadDolar);
			break;

		case 4:
			cantidadDolar = cantidad / PESOCOLOMBIANO;
			printf("\n Su cantidad en dolar es de: $%0.10f", cantidadDolar);
			break;

		case 5:
			cantidadDolar = cantidad / PESOMEXICANO;
			printf("\n Su cantidad en dolar es de: $%0.10f", cantidadDolar);
			break;

		case 6:
			cantidadDolar = cantidad / YEN;
			printf("\n Su cantidad en dolar es de: $%0.10f", cantidadDolar);
			break;

		case 7:
			cantidadDolar = cantidad / YUAN;
			printf("\n Su cantidad en dolar es de: $%0.10f", cantidadDolar);
			break;

		case 8:
			cantidadDolar = cantidad / EURO;
			printf("\n Su cantidad en dolar es de: $%0.10f", cantidadDolar);
			break;

		case 9:
			cantidadDolar = cantidad / REALBRASILENO;
			printf("\n Su cantidad en dolar es de: $%0.10f", cantidadDolar);
			break;

		case 10:
			cantidadDolar = cantidad / PESOARGENTINO;
			printf("\n Su cantidad en dolar es de: $%0.10f", cantidadDolar);
			break;

		default:
			printf("\n El numero que inserto no aparece en el menu");
		}
		printf("\n\n\n Si desea convertir otra divisa Inserte -1- para cerrar el programa Inserte -0-: ");
		scanf("%d", &respuesta);
		system("cls");
	} while (respuesta == 1);

	printf("Gracias por usar nuestro sistema ");
	return 0;
}