/*
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

//=======ESTRUCTURAS============================================================
typedef struct{
	int id;
	char nombre[51];
	char apellido[51];
	float precio;
	char codigoVuelo[10];
	int tipoPasajero;
	int estadoDeVuelo;
	int estado;
}sPasajeros;
//-------------------------------------------------
typedef struct
	{
		int dni;
		char nombre[20];
		char apellido[20];
	}sAlumno;
//-------------------------------------------------



//===============VECTORES=====================================================
int IngresarEntero(char mensaje[]);
float IngresarFlotante(char mensaje[]);
void PedirEnterosVector(char mensaje[],int [],int);
void PedirCadenasVector(char mensaje[],char[],char[]);
void MostrarNumerosVector(char mensaje[], int[],int);
void SumarEnterosVector(int[],int);
void CalcularPositivosVector(int [],int);
void CalcularNegativosVector(int[], int);
void SumarParesVector(int[],int);
void MayorImparesVector(int[],int);
void ListarNumerosParesVector(int[],int);
void ListarNumerosImparesVector(int[],int);
void OrdenarDeMenorAMayorVector(int[],int);
void MostrarDeMayorAMenorVector(int[],int);
void BuscarPositivosVector(int[],int);
void BuscarNegativosVector(int[],int);
void NumerosRepetidosVector(int[],int);
void MostrarMenu(int,int[],int);
void MostrarSoloUnEnteroVector(int[],int);
void PromediarVector(int[],int);
int CambiarVocal(char[],int,char);

//===========ESTRUCTURAS=========================================================

float HacerDescuento(int,float);
float HacerAumento(int,float);
sPasajeros CargarUnPasajero();
int BuscarPorLista(sPasajeros[],int);
void MostrarEstructura(sPasajeros[],int);
sAlumno PedirDatosEstructura(sAlumno);
sPasajeros ModificarStruct(sPasajero);
void MostrarUnPasajero(sPasajeros);
void MostrarTodosLosPasajeros(sPasajeros[],int);

void CargarUnPasajeroEnLista(sPasajeros[],int);


#endif /* FUNCIONES_H_ */

