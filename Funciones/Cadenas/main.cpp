#include <iostream>

using namespace std;

int main(){
	char cadena[1000];

	cout << "cadena: ";
	cin >> cadena;

	for(int i=0; i<1000; i++){
		if(cadena[i] == '\0'){
			cout << i;
			break;
		}
	}
}

int contar
