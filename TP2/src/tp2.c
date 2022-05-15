#include <stdio.h>
#include <stdlib.h>
#include "biblioTP2.h"
#define lleno 1
#define vacio 0
#define tam 2000

int main()
{
	setbuf(stdout, NULL);

	sPasajeros listaPasajeros[tam];
	sTipoDePasajeros tipos[tam];

	int index;
	int op;
	int opcion;

	PonerTodosLosEstadosEmpty(listaPasajeros,tam);

do
{
	printf("1)DAR DE ALTA: \n");
	printf("2)MODIFICAR: \n");
	printf("3)DAR DE BAJA: \n");
	printf("4)INFORMAR: \n");
	printf("5)SALIR: \n");
	fflush(stdin);
	scanf("%d",&op);

	switch(op)
	{
	case 1:
	index =	CargarUnPasajeroEnLista(listaPasajeros,tam);
	if(index==-1)
	{
		printf("la lista esta llena");
	}
	else
	{
		printf("cargado con exito\n");
	}
		break;
	case 2:
		ModificarPasajero(listaPasajeros,tam,tipos);
		break;
	case 3:
		EliminarPasajeros(listaPasajeros,tam);
		break;
	case 4:
		do{

			printf("1) listado ordenado alfabeticamente + tipo de pasajero\n");
			printf("2) precio total, promedio y personas que superan el promedio\n");
			printf("3) listado de pasajeros por codigo de vuelo y estado activo\n");
			printf("4) salir");
			switch(opcion)
			{
			case 1:
				Mostrar1(listaPasajeros,tam,tipos);
				break;
			case 2:
				Mostrar2(listaPasajeros,tam);
				break;
			case 3:
				Mostrar3(listaPasajeros,tam);
				break;
			default:
				printf("ingreses opcion correcta");
				break;
			}
			break;
		}while(opcion!=4);
		}
		break;

}while(op!=5);

	printf("fin del programa");

	return 0;
}




