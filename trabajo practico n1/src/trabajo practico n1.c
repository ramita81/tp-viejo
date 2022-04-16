/*
 TP1 Ramiro Orta Albero
 42102217
 */

/*
 Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir
*/
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void)
{
	setbuf(stdout,NULL);
	float aumentoLatam;
	float aumentoAerolineas;
	float descuentoLatam;
	float descuentoAerolineas;
	float bitcoinAerolineas;
	float bitcoinLatam;
	float precioPorKilometro;
	float diferenciaDePrecio;
	int banderaKm;
	int banderaAerolineas;
	banderaKm = 0;
	banderaAerolineas =0;
	int costos;
	costos=0;
	int opcion;
	float kilometros;
	float precioVueloLatam;
	float precioVueloAerolineas;

	do
	{
		printf("<-------------------------------->\n");
		printf("1) para ingresar kilometros\n");
		printf("2) para ingresar precio de vuelos\n");
		printf("3) para calcular costos\n");
		printf("4) para informar resultados\n");
		printf("5) carga forzada de datos\n");
		printf("6) para salir\n");
		printf("<-------------------------------->\n");
		scanf("%d",&opcion);

		switch(opcion)
		{

			case 1:
				kilometros= IngresarEntero("ingresar kilometros \n");
				banderaKm =1;
				break;
			case 2:
				precioVueloAerolineas = IngresarFlotante("ingrese precio Aerolineas\n");
				precioVueloLatam = IngresarFlotante("ingrese precio para Latam\n");
				banderaAerolineas =1;
				break;
			case 3:
				costos=1;
				if (banderaKm == 1 && banderaAerolineas ==1)
				{
				descuentoLatam = DescontarLatam(precioVueloLatam);
				descuentoAerolineas = DescontarAerolineas(precioVueloAerolineas);
				aumentoLatam = AumentarLatam(precioVueloLatam);
				aumentoAerolineas = AumentarAerolineas(precioVueloAerolineas);
				bitcoinAerolineas = ConvertirABitcoinAerolineas(precioVueloAerolineas);
				bitcoinLatam = ConvertirABitcoinLatam(precioVueloLatam);
				precioPorKilometro = PrecioPorKilometro(kilometros);
				diferenciaDePrecio = DiferenciarPrecios(precioVueloAerolineas,precioVueloLatam);
				printf("costos calculados\n");
				}
				else
				{
					printf("faltan datos por cargar\n");
					printf("redirigido nuevamente al menu\n");
				}

				break;
			case 4:
				if(costos==1)
				{
				printf("el descuento para Latam es:$ %.2f\n", descuentoLatam);
				printf("el descuento para Aerolineas es:$ %.2f\n", descuentoAerolineas);
				printf("el aumento para Latam es:$ %.2f\n",aumentoLatam);
				printf("el aumento para Aerolineas  es %.2f\n", aumentoAerolineas);
				printf("en bitcoin el precio de Aerolineas queda en :$ %.8f\n",bitcoinAerolineas);
				printf("en bitcoin el precio de Latam queda en :$ %.8f\n",bitcoinLatam);
				printf("el precio por kilometro es  :$ %.2f\n",precioPorKilometro);
				printf("la diferencia de precio es de: $ %.2f\n", diferenciaDePrecio);
				}
				else{
					printf("primero calcule los costos");
				}
				break;
			case 5:
				printf("los nuevos datos cargados son: \n");
				printf("--------------------- \n");
				kilometros = 7090;
				precioVueloAerolineas= 162965;
				precioVueloLatam = 159339;
				descuentoLatam = DescontarLatam(precioVueloLatam);
				descuentoAerolineas = DescontarAerolineas(precioVueloAerolineas);
				aumentoLatam = AumentarLatam(precioVueloLatam);
				aumentoAerolineas = AumentarAerolineas(precioVueloAerolineas);
				bitcoinAerolineas = ConvertirABitcoinAerolineas(precioVueloAerolineas);
				bitcoinLatam = ConvertirABitcoinLatam(precioVueloLatam);
				precioPorKilometro = PrecioPorKilometro(kilometros);
				diferenciaDePrecio = DiferenciarPrecios(precioVueloAerolineas,precioVueloLatam);
				printf("km ingresados: %.0f",kilometros);
				printf("\n");
				printf("precio Aerolineas: %.2f",precioVueloAerolineas);
				printf("a) precio con tarjeta de debito: $%.2f\n", descuentoAerolineas);
				printf("b) precio con tarjeta de credito: %.2f\n", aumentoAerolineas);
				printf("c) precio pagando con bitcoin: %.2f\n",bitcoinAerolineas);
				printf("mostrar precio unitario: %.2f\n",precioPorKilometro);
				printf("\n");
				printf("precio Latam: &%f.2",precioVueloLatam);
				printf("a) precio con tarjeta de debito: $%.2f\n", descuentoLatam);
				printf("b) precio con tarjeta de credito: $%.2f\n",aumentoLatam);
				printf("precio pagado con bitcoin: %.2f\n",bitcoinLatam);
				printf("mostrar precio unitario: %.2f\n",precioPorKilometro);
				printf("\n");
				printf("la diferencia de precio es: %f.2\n", diferenciaDePrecio);
				break;

			default:
				printf("ingrese opcion correcta");
				break;
		}
	} 	while (opcion!=6);
	printf("gracias por usar nuestra app ");

	return opcion;
}










