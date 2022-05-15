
#include <stdio.h>
#include <stdlib.h>
#include "biblioTP2.h"
#include <string.h>
#define sizeTipoPasajero 2
static int idIncremental=0;
static sTipoDePasajeros tipoPasajero[sizeTipoPasajero]={{1,"ejecutivo"},{2,"turista"}};


sPasajeros CargarUnPasajero()
{
	sPasajeros unPasajero;
	int op;

	printf("ingrese nombre\n");
	scanf("%s",unPasajero.nombre);
	fflush(stdin);
	printf("ingrese el apellido\n");
	gets(unPasajero.apellido);
	fflush(stdin);
	printf("ingrese precio de vuelo\n");
	scanf("%f",&unPasajero.precio);
	printf("ingrese codigo de vuelo\n");
	scanf("%s",unPasajero.codigoVuelo);
	fflush(stdin);
	printf("tipo de pasajero:\n");
	printf("1) para clase EJECUTIVA\n");
	printf("2) para clase TURISTA\n");
	scanf("%d",&unPasajero.idTipoPasajero);
	printf("ingrese ESTADO DE VUELO\n");
	printf("1) ACTIVO || 2) DEMORADO");
	scanf("%d",&op);
	{
		switch(op)
		{
		case 1:
			unPasajero.estadoDeVuelo=1;
			break;
		case 2:
			unPasajero.estadoDeVuelo=2;
			break;
		default:
			printf("ingrese opcion correcta");
			break;
		}
	}
	unPasajero.id=generadorId();

	unPasajero.estado=1;

	return unPasajero;
}
void PonerTodosLosEstadosEmpty(sPasajeros lista[],int tam)
{
	for(int i=0; i<tam; i++)
	{
		lista[i].estado=0;
	}
}
int CargarUnPasajeroEnLista(sPasajeros lista[],int tam)
{
	int index;
	index = BuscarLibre(lista,tam);
		if(index!=-1)
		{
			lista[index]=CargarUnPasajero();
		}
		return index;

}
int BuscarLibre(sPasajeros lista[],int tam)
{
	int index = -1;

	for(int i=0; i<tam; i++)
	{
		if(lista[i].estado==0)
		{
			index = i;
			break;
		}
	}
	return index;
}
sPasajeros ModificarPasajero(sPasajeros lista[],int tam,sTipoDePasajeros tipo[])
{
	int opcion;
	int index;
	sPasajeros unPasajero;
	int idIngresado;

	mostrarParaModificar(lista,tam);
	printf("ingrese id para modificar");
	scanf("%d",&idIngresado);
	index=BuscarPorId(lista, tam, idIngresado);

	printf("------------------ingrese opcion-------------------------\n");
	printf(" 1) cambiar Nombre\n 2) cambiar Apellido\n 3)PRECIO\n"
			"3) CODIGO DE VUELO\n 4) TIPO DE PASAJERO\n 5) ESTADO DE VUELO\n");
	printf("---------------------------------------------------------\n");
	fflush(stdin);
	scanf("%d",&opcion);

	switch(opcion){

	case 1:
			printf("CAMBIAR NOMBRE: \n");
			fflush(stdin);
			gets(lista[index].nombre);
		break;
	case 2:
			printf("CAMBIAR APELLIDO: \n");
			fflush(stdin);
			gets(lista[index].apellido);
		break;
	case 3:
			printf("CAMBIAR PRECIO \n");
			scanf("%f",&lista[index].precio);
		break;
	case 4:
			printf("CAMBIAR CODIGO DE VUELO\n");
			fflush(stdin);
			gets(lista[index].codigoVuelo);
		break;
	case 5:
			printf("CAMBIAR TIPO DE PASAJERO\n");
			MostrarTipoDePasajero(lista);
			printf("ingrese 1 para clase EJECUTIVA");
			printf("ingrese 2 para clase TURISTA");
			scanf("%d",&tipo[index].idTipoDePasajero);
		break;
	default:
		printf("Elija opcion valida");
		break;
	}
		printf("Fin de la Modificacion\n");

	return unPasajero;
}


int generadorId()
{
	idIncremental++;

	return idIncremental;
}
void mostrarParaModificar(sPasajeros lista[],int tam)
{
	for(int i=0;i<tam;i++)
	{
		if(lista[i].estado==1)
		{
			printf("ID: %d\n Nombre: %s\n apellido: %s\n",lista[i].id,lista[i].nombre,lista[i].apellido);
		}
	}
}

int BuscarPorId(sPasajeros lista[],int tam,int idIngresado)
{
	int index;
	index=-1;
	for(int i=0;i<tam;i++)
	{
		if(idIngresado==lista[i].id)
		{
			index = i;
			break;
		}
	}
	return index;
}

void MostrarTipoDePasajero()
{
	for(int i=0; i<2; i++)
	{
		printf("%d y %s",tipoPasajero[i].idTipoDePasajero,tipoPasajero[i].descripcion);
	}
}

sPasajeros EliminarPasajeros(sPasajeros lista[],int tam)
{

	int index;
	int idIngresado;
	sPasajeros unPasajero;

	mostrarParaModificar(lista, tam);
	printf("ingrese id para ELIMINAR");
	scanf("%d",&idIngresado);
	index=BuscarPorId(lista, tam, idIngresado);
	DarDeBaja(lista,index);
	printf("pasajero dado de baja");
	mostrarParaModificar(lista, tam);

	return unPasajero;
}
void DarDeBaja(sPasajeros lista[],int index)
{
	lista[index].estado=0;
}

void MostrarTodo(sPasajeros lista[],int tam)
{
	int contador;
	float acumuladorPrecio;
	int itera;
	int index;
	float promedio;
	acumuladorPrecio =0;
	itera=0;
		printf("-----------los datos ingresados fueron----------------\n\n");
		printf(" Nombre   || apellido   || tipo de pasajero || estado de vuelo \n ");
for(int i=0;i<tam;i++)
{
	if(lista[i].estado==1 && lista[i].estadoDeVuelo==1)
	{
		itera++;
		acumuladorPrecio+=lista[i].precio;
		index=CompararId(lista[i]);
 		MostrarUnPasajero(lista[i],index);
	}
}
	if(itera>0)
	{
	promedio=acumuladorPrecio/itera;
	printf(" precio total: %.2f\n",acumuladorPrecio);
	printf("el promedio de los pasajes es: %.2f\n",promedio);
	contador=superarPromedio(lista, tam, promedio);
	printf("el numero de personas que supera el promedio de precios es: %d\n",contador);
	}
	else
	{
		printf("ninguna persona con vuelo activo");
	}
}

int CompararId(sPasajeros unPasajero)
{
	int index;
	for(int i=0;i<sizeTipoPasajero;i++)
	{
		if(unPasajero.idTipoPasajero==tipoPasajero[i].idTipoDePasajero)
		{
			index=i;
			break;
		}
	}
	return index;
}

void MostrarUnPasajero(sPasajeros unPasajero,int index)
{

	printf("  %5s  ||  %8s  ||  %10s ||  ACTIVO \n",unPasajero.nombre,unPasajero.apellido,
														tipoPasajero[index].descripcion);


}

int superarPromedio(sPasajeros unPasajero[],int tam,int promedio)
{
	int contador;
	contador=0;
	for(int i=0;i<tam;i++)
	{
		if(unPasajero[i].precio>promedio)
		{
			contador++;
		}
	}
	return contador;
}

void OrdenarDeMenorAMayorPorApellidoYTipoDePasajero(sPasajeros lista[],int tam)
{
	sPasajeros auxiliar;

	int i;
	for(i=0;i<tam;i++)
	{
		for(int j=i+1;j<tam;j++)
		{
			if(lista[i].idTipoPasajero<lista[j].idTipoPasajero)
			{
				auxiliar=lista[i];
				lista[i]=lista[j];
				lista[j]=auxiliar;
			}
		}
	}

	for(int f=0;f<tam;f++)
	{
		for(int g=f+1;g<tam;g++)
		{
			if((strcmp(lista[f].apellido, lista[g].apellido)>0))
			{
				auxiliar=lista[f];
				lista[f]=lista[g];
				lista[g]=auxiliar;
			}
		}
	}
}

void OrdenarPorCodigoDeVuelo(sPasajeros lista[],int tam)
{
	sPasajeros auxiliar;

	for(int f=0;f<tam;f++)
	{
		for(int g=f+1;g<tam;g++)
		{
			if((strcmp(lista[f].codigoVuelo, lista[g].codigoVuelo)>0))
			{
				auxiliar=lista[f];
				lista[f]=lista[g];
				lista[g]=auxiliar;
			}
		}
	}
}

void Mostrar1 (sPasajeros lista[],int tam,sTipoDePasajeros tipo[]) //problema con tipo de pasjero
{
	printf("-----ordenar alfabeticamente apellido + tipo de pasajero-----\n");
printf(" Apellido 	|| nombre	|| tipo de pasajero");
	for(int i=0;i<tam;i++)
	{
		if(lista[i].estado==1)
		{
			OrdenarDeMenorAMayorPorApellidoYTipoDePasajero(lista, tam);
			printf("  %8s  ||  %8s  ||  %8s ||\n",lista[i].apellido,lista[i].nombre,
															tipo[i].descripcion);
		}
	}

}

void Mostrar2(sPasajeros lista[],int tam) //problema con el promedio
{
	printf("------------precio toal + promedio de precio + cantidad de personas que superan el promedio---------\n");
	printf("precio total	||	promedio	||	superan el promedio	||\n");
	float acumuladorPrecio;
	float promedio;
	int itera;
	int contadorPersonas;
	contadorPersonas=0;
	itera=0;
	acumuladorPrecio =0;

	for(int i=0; i<tam; i++)
	{
		if (lista[i].estado==1)
		{
			itera++;
			acumuladorPrecio+=lista[i].precio;
		}
	}
	promedio=acumuladorPrecio/itera;

	for(int i=0;i<tam;i++)
	{
		if(lista[i].precio>promedio)
		{
			contadorPersonas++;
		}
	}
	printf("%10.2f	|| %15.2f	||	%10.d		||\n",acumuladorPrecio,promedio,contadorPersonas);

}

void Mostrar3 (sPasajeros lista[],int tam)
{
	printf("------lista de pasajero + codigo de vuelo + estado ACTIVO-------\n ");
	printf("nombre	||	apellido	||	codigo de vuelo || ACTIVO\n");
	for(int i=0; i<tam;i++)
	{
		if(lista[i].estado==1 && lista[i].estadoDeVuelo==1)
		{
			printf("%5s 	|| %5s		|| %5s		||	ACTIVO\n",lista[i].nombre,lista[i].apellido,
																		lista[i].codigoVuelo);
		}
	}
}








