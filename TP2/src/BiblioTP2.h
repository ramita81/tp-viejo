#ifndef BIBLIOTP2_H_
#define BIBLIOTP2_H_
//=====================ESTRUCTURAS======================

typedef struct{
int id;
char nombre[51];
char apellido[51];
float precio;
char codigoVuelo[10];
int idTipoPasajero;
int estadoDeVuelo;
int estado;
}sPasajeros;

typedef struct{
int idTipoDePasajero;
char descripcion[20];
}sTipoDePasajeros;

//===================PROTOTIPOS==========================

void PonerTodosLosEstadosEmpty(sPasajeros[],int);
int CargarUnPasajeroEnLista(sPasajeros[],int );
sPasajeros CargarUnPasajero();
int BuscarLibre(sPasajeros[],int);
int BuscarPorId(sPasajeros[],int,int);
sPasajeros ModificarPasajero(sPasajeros[],int,sTipoDePasajeros[]);
int TipoDePasajero (sPasajeros[],int);
int generadorId();
void mostrarParaModificar(sPasajeros[],int);
void MostrarTipoDePasajero();
sPasajeros EliminarPasajeros(sPasajeros[],int);
void DarDeBaja(sPasajeros[],int);
void MostrarTodo(sPasajeros[],int);
int CompararId(sPasajeros);
void MostrarUnPasajero(sPasajeros,int);
int superarPromedio(sPasajeros[],int,int);
void OrdenarDeMenorAMayorPorApellidoYTipoDePasajero(sPasajeros[],int);
void OrdenarPorCodigoDeVuelo(sPasajeros[],int);
void Mostrar1(sPasajeros[],int,sTipoDePasajeros[]);
void Mostrar2(sPasajeros[],int);
void mostrar3(sPasajeros[],int);


#endif /* BIBLIOTP2_H_ */
