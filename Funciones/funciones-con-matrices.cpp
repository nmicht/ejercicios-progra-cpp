#include <iostream>

using namespace std;


int diagonal(int matriz[][], int tam){
	int suma=0;

	for(int pos=0; pos<tam; pos++)
		suma += matriz[tam][tam];

	return suma;
}
