/*
 * funciones.c
 *
 *  Created on: 13 abr. 2022
 *      Author: gabri
 */
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>


float IngresarFlotante (char mensaje[])
{
	float flotante;
	printf("%s",mensaje);
	scanf("%f",&flotante);
	return flotante;
}
int IngresarEntero(char mensaje[])
{
	int entero;
	printf("%s",mensaje);
	scanf("%d", &entero);
	return entero;
}

float DescontarLatam(float precioVueloLatam)
{
	float descuentoLatam;

	descuentoLatam = precioVueloLatam *0.9;

	return descuentoLatam;
}
float DescontarAerolineas (float precioVueloAerolineas)
{
	float descuentoAerolineas;

	descuentoAerolineas = precioVueloAerolineas * 0.9;

	return descuentoAerolineas;
}
float AumentarLatam (float precioVueloLatam)
{
	float aumentoLatam;

	aumentoLatam = precioVueloLatam *1.25;

	return aumentoLatam;
}

float AumentarAerolineas(float precioVueloAerolineas)
{
	float aumentoAerolineas;

	aumentoAerolineas = precioVueloAerolineas *1.25;

	return aumentoAerolineas;

}
float ConvertirABitcoinAerolineas (float precioVueloAerolineas)
{
	float bitcoin;
	bitcoin = precioVueloAerolineas / 4606954.55;

	return bitcoin;
}
float ConvertirABitcoinLatam (float precioVueloLatam)
{
	float bitcoin;
	bitcoin = precioVueloLatam / 4606954.55;

	return bitcoin;
}
float PrecioPorKilometro(float kilometros)
{
	float precioPorQuilometro;

	precioPorQuilometro = kilometros *10;

	return precioPorQuilometro;

}
float DiferenciarPrecios (float precioVueloAerolineas, float precioVueloLatam)
{
	float diferenciaPrecio;

	if(precioVueloAerolineas > precioVueloLatam)
	{
		diferenciaPrecio = precioVueloAerolineas - precioVueloLatam;
	}
	else
	{
		diferenciaPrecio = precioVueloLatam - precioVueloAerolineas;
	}

	return diferenciaPrecio;
}









