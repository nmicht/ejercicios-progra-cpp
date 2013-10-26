#include <iostream>

using namespace std;

//Prototipos
void llenarVector(int tam, int arreglo[]);
void sumaVectores(int arr1[], int arr2[], int arr3[], int tam);
void restaVectores(int arr1[], int arr2[], int arr3[], int tam);
int multVector(int arr1[], int arr2[], int tam);
void mostrarVector(int v[], int tam);

int main(){
	//Las variables locales del programa
	int v1[100], v2[100], resultado[100], tam, opc, res_mult;

	//Definir el tamaño de los arreglos
	do{
		cout << "De que tamaño quieres los vectores? ";
		cin >> tam;
		if ( tam < 1 || tam > 100 )
			cout << "Tamaño inválido" << endl << endl;
	}
	while(tam < 1 || tam > 100);

	//Llenar el vector 1
	llenarVector(tam,v1);

	//Llenar el vector 2
	llenarVector(tam,v2);

	//Preguntarle que quiere hacer
	cout << "1. Suma" << endl;
	cout << "2. Resta" << endl;
	cout << "3. Multiplicacion" << endl;
	cout << "Elige una opcion ";
	cin >> opc;

	switch(opc){
		case 1:
			//Sumar los vectores
			sumaVectores(v1,v2,resultado,tam);
			//Mostrar el vector del resultado
			mostrarVector(resultado,tam);
			break;
		case 2:
			//Restar los vectores
			restaVectores(v1,v2,resultado,tam);
			//Mostrar el vector del resultado
			mostrarVector(resultado,tam);
			break;
		case 3:
			//Multiplicar los vectores
			res_mult = multVector(v1,v2,tam);
			//Mostrar el resultado
			cout << res_mult;
			break;
		default:
			cout << "!!!!!!!! Opción inválida !!!!!!!" << endl;
	}
}


void mostrarVector(int v[], int tam){
	for(int i=0; i<tam; i++){
		cout << v[i] << endl;
	}
}

int multVector(int arr1[], int arr2[], int tam){
	int acum=0;

	for(int i=0; i < tam; i++)
		acum = acum + arr1[i] * arr2[i];

	return acum;
}

void restaVectores(int arr1[], int arr2[], int arr3[], int tam){
	for(int i=0; i < tam; i++)
		arr3[i] = arr1[i] - arr2[i];
}

void sumaVectores(int arr1[], int arr2[], int arr3[], int tam){
	for(int i=0; i < tam; i++)
		arr3[i] = arr1[i] + arr2[i];
}


void llenarVector(int tam, int arreglo[]){
	for(int i=0; i<tam; i++){
		cout << "Dame el valor de la posición " << i+1;
		cin >> arreglo[i];
	}
}
