/*
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "funciones.h"
#define vacio 0
#define lleno 1



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


void PedirEnterosVector( char mensaje[], int v[],int TAM)
{
		int i;

		for (i=0;i<TAM;i++)
		{
		printf("%s",mensaje);
		scanf("%d",&v[i]);
		}

}
	void PedirCadenasVector(char mensaje[],char nombre[],char apellido[])
	{
		printf("%s",mensaje);
		gets(nombre);
		printf("%s",mensaje);
		gets(apellido);

		printf("%s,%s",apellido,nombre);

	}


void MostrarNumerosVector(char mensaje [],int v[],int TAM)
{
		int i;
		printf("%s",mensaje);

		for(i=0;i<TAM;i++)
		{
			printf( "%d\n",v[i] );
		}
}
void SumarEnterosVector (int v[], int TAM)
{
		int i;
		int acumulador;
		acumulador =0;

		for(i=0;i<TAM;i++)
		{
			acumulador+=v[i];
		}

}


void CalcularPositivosVector (int v[],int TAM)
{
	int contadorPositivos;
	int i;
	contadorPositivos=0;

	for(i=0;i<TAM;i++)
	{
		if(v[i]>0)
		{
			contadorPositivos++;
		}
	}
	printf("la cantidad de positivos fue: %d\n", contadorPositivos);


}

void CalcularNegativosVector (int v[],int TAM)
{

	int contadorNegativos;
	int i;
	contadorNegativos=0;

	for(i=0;i<TAM;i++)
	{
		if(v[i]<0)
		{
			contadorNegativos++;
		}
	}
	printf("la cantidad de negativos es: %d\n",contadorNegativos);
}

void SumarParesVector (int v[],int TAM)
{
	int i;
	int acumuladorPares;
	acumuladorPares=0;

	for(i=0;i<TAM;i++)
	{
		if(v[i]% 2 == 0)
		{
			acumuladorPares+=v[i];
		}

	}
	printf(" la suma de pares es: %d\n", acumuladorPares);

}

void MayorImparesVector (int v[],int TAM)
{
	int i;
	int banderaImpar;
	banderaImpar=0;
	int mayorImpar;


	for(i=0;i<TAM;i++)
	{
		if(v[i]%2==1)
		{
			if(v[i]>mayorImpar || banderaImpar==0)
			{
				mayorImpar = v[i];
				banderaImpar =1;
			}
		}
	}
	printf("el mayor numero impar es: %d\n", mayorImpar);
}

void ListarNumerosParesVector(int v[],int TAM)
{
	int i;

	for(i=0;i<TAM;i++)
{
		if(v[i]% 2 == 0)
		{
			printf("los numeros pares ingresados fueron: %d\n",v[i]);
		}
}
}

void ListarNumerosImparesVector(int v[],int TAM)
{
	int i;

	for(i=0;i<TAM;i++)
	{
		if(v[i]% 2 == 1)
		{
			printf("el numero ingresado impar fue: %d\n",v[i]);
		}

	}
}
void OrdenarDeMenorAMayorVector(int v[],int TAM)
{
		int i,j,aux;

			for(i=0;i<TAM;i++)
			{
				for(j=i+1;j<TAM;j++)
				{
					if(v[i]>v[j])
					{
						aux=v[i];
						v[i] = v[j];
						v[j]=aux;
					}
				}
			}


}

	void MostrarDeMayorAMenorVector(int v[],int TAM)
{

		int i,j,aux;

				for(i=0;i<TAM;i++)
				{
					for(j=i+1;j<TAM;j++)
					{
						if(v[i]<v[j])
						{
							aux=v[i];
							v[i] = v[j];
							v[j]=aux;
						}
					}
				}

}

void BuscarPositivosVector(int v[],int TAM)
{
	int i;
	printf("los numeros positivos son: ");

	for(i=0;i<TAM;i++)
	{
		if(v[i]>0)
		{
			printf("%d|",v[i]);
		}
	}

}

void BuscarNegativosVector(int v[],int TAM)
{
	int i;
		printf("los numeros positivos son: ");

		for(i=0;i<TAM;i++)
		{
			if(v[i]<0)
			{
				printf("%d|",v[i]);
			}
		}

}

void NumerosRepetidosVector(int v[],int TAM)
{
	int contador;
	contador =0;
	printf("\n los numeros repetidos son: ");
	for(int i=0;i<TAM;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(v[i] == v[j])
			{
			printf("%d|", v[i]);
			contador=1;
			}
		}
	}
	if(contador==0)
	{
		printf("ninguno");
	}
}

void MostrarMenu(int opcion,int v[],int TAM)
{


	do
	{

	printf("1. inicializar vector de enteros\n");
	printf("2. cargar numeros vector \n");
	printf("3. mostrar edades\n");
	printf("4. calcular promedio\n");
	printf("5. Salir");
	scanf("%d", &opcion);

	switch(opcion)
	{
	case 1:
		printf("inicializar\n");
		break;
	case 2:
		printf("cargar");
		break;
	case 3:
		printf("\n el unico numero mostrado es: \n");
		break;
	case 4:
		printf("calcular promedio\n");
		break;
	}

	}while(opcion!=5);

	printf("fin del programa");
}

void MostrarSoloUnEnteroVector(int v[],int TAM)
{
	int i;

	for(i=0;i<1;i++)
	{
		printf("%d",v[i]);
	}
}

void PromediarVector(int v[],int TAM)
{
	int i;
	int sumatoria;
	float promedio;

	for(i=0;i<TAM;i++)
	{
	sumatoria += v[i];
	}
	promedio = sumatoria/TAM;

	printf("el promedio es: %.2f", promedio);
}

int CambiarVocal(char v [],int TAM,char comodin)
{
	int contador;
	contador = 0;

	for(int i=0; i<TAM; i++)
	{
		if(v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u')
		{
			 v[i]=comodin;
			 contador++;
		}
	}
	return contador;
}

float HacerDescuento(int importe,float descuento)
{
	descuento = (importe)*(1-descuento/100);

	return descuento;
}

float HacerAumento(int importe, float aumento)
{
		aumento = (importe)*(1+aumento/100);

		return aumento;
}
sPasajeros CargarUnPasajero()

{

	sPasajeros unPasajero;

	printf("ingrese nombre\n");
	scanf("%s",unPasajero.nombre);
	fflush(stdin);
	printf("ingrese el apellido\n");
	scanf("%s",unPasajero.apellido);
	fflush(stdin);
	printf("ingrese precio de vuelo\n");
	scanf("%f",&unPasajero.precio);
	printf("ingrese codigo de vuelo\n");
	scanf("%s",unPasajero.codigoVuelo);
	fflush(stdin);
	printf("tipo de pasajero\n");
	scanf("%d",&unPasajero.tipoPasajero);
	printf("estado de vuelo\n");
	fflush(stdin);
	scanf("%d",&unPasajero.estadoDeVuelo);
	unPasajero.estado=1;


	return unPasajero;
}

int BuscarPorLista(sPasajeros lista[],int TAM)
{
	int index;
	index = -1;
	for(int i=0; i<TAM; i++)
	{
		if (lista[i].estado==vacio)
		{
			 index=i;
		 break;
		}
	}
	return index;
}


void MostrarEstructura(sPasajeros unPasajero[],int tam)
{
	printf("id:%d nombre:%s apellido:%s precio de vuelo:%f codigo de vuelo:%s tipo de pasajero:%d estado de vuelo:%d estado:%d",unPasajero.id,unPasajero.nombre,unPasajero.apellido,unPasajero.precio,unPasajero.codigoVuelo,unPasajero.tipoPasajero,unPasajero.estadoDeVuelo,unPasajero.estado);
	//completar con los datos correspondientes a la estructura//
}


sAlumno PedirDatosEstructura(sAlumno unAlumno)
{

	printf("ingrese nombre\n");
	gets(unAlumno.nombre);
	printf("ingrese apellido\n");
	gets(unAlumno.apellido);
	printf("ingrese dni\n");
	fflush(stdin);
	scanf("%d",&unAlumno.dni);

	return unAlumno;
}

sPasajeros ModificarStruct(sPasajeros unPasajero)
{
	int opcion;

	do{
	printf("------------------ingrese opcion-------------------------\n");
	printf(" 1) cambiar Nombre\n 2) cambiar Apellido\n 3)PRECIO\n"
			"3) CODIGO DE VUELO\n 4) TIPO DE PASAJERO\n 5) ESTADO DE VUELO\n 6) ESTADO\n"
			"7) NO MODIFICAR");
	printf("---------------------------------------------------------\n");
	scanf("%d",&opcion);

	switch(opcion){

	case 1:
			printf("CAMBIAR NOMBRE: \n");
			fflush(stdin);
			gets(unPasajero.nombre);
		break;
	case 2:
			printf("CAMBIAR APELLIDO: \n");
			fflush(stdin);
			gets(unPasajero.apellido);
		break;
	case 3:
			printf("CAMBIAR PRECIO \n");
			fflush(stdin);
			scanf("%f",&unPasajero.precio);
		break;
	case 4:
			printf("CAMBIAR CODIGO DE VUELO\n");
			fflush(stdin);
			gets(unPasajero.codigoVuelo);
		break;
	case 5:
			printf("CAMBIAR TIPO DE PASAJERO\n");
			fflush(stdin);
			scanf("%d",&unPasajero.tipoPasajero);
		break;
	case 6:
			printf("CAMBIAR ESTADO DE VUELO\n");
			fflush(stdin);
			scanf("%d",&unPasajero.estadoDeVuelo);
		break;
	case 7:
			printf("CAMBIAR ESTADO\n");
			fflush(stdin);
			scanf("%d",&unPasajero.estado);
		break;
	}
	}while(opcion!=8);

		printf("Fin de la Modificacion\n");

	return unPasajero;
}

void MostrarUnPasajero(sPasajeros unPasajero)
{
	printf("id:%d nombre:%s apellido:%s precio de vuelo:%f codigo de vuelo:%s tipo de pasajero:%d estado de vuelo:%d estado:%d",unPasajero.id,unPasajero.nombre,unPasajero.apellido,unPasajero->precio,unPasajero.codigoVuelo,unPasajero.tipoPasajero,unPasajero.estadoDeVuelo,unPasajero.estado);
}
*/
/*
void CargarUnPasajeroEnLista(sPasajeros lista[],int tam)
{
	for(int i=0; i<tam; i++)
	{
		if(lista[i].estado==0)
		{
			lista[i]=CargarUnPasajero();
			break;
		}
		printf("la lista esta llena");
	}
}


void MostrarTodosLosPasajeros(sPasajeros unPasajero[],int tam)
{
	printf("los pasajeros son:");

	for(int i=0; i<tam; i++)
	{
	}
}

*/


