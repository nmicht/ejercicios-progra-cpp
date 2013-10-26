#include <iostream>
#include "llenar.cpp"
#include "suma.cpp"
#include "resta.cpp"
#include "mult.cpp"
#include "mostrar.cpp"

using namespace std;

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

