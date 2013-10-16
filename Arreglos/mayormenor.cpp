#include <iostream>

using namespace std;

int main(){
	int numeros[5], mayor_pos=0, menor_pos=0, mayor, menor;

	for(int i=0; i<5; i++){
		cout << "Dame un numero ";
		cin >> numeros[i];
		if(i==0)
			mayor = menor = numeros[i];
		else{
			if(numeros[i] > mayor){
				mayor = numeros[i];
				mayor_pos = i;
			}
			if(numeros[i] < menor){
				menor = numeros[i];
				menor_pos = i;
			}
		}
	}
	cout << "El mayor esta en la posicion " << mayor_pos << endl;
	cout << "El menor esta en la posicion " << menor_pos << endl;
}
