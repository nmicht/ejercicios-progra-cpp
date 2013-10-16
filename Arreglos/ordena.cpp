#include <iostream>

using namespace std;

int main(){
	int numeros[5], temp;

	for(int i=0; i<5; i++){
		cout << "Dame un numero ";
		cin >> numeros[i];
	}

	for(int i=1; i<5; i++){
		for(int j=0; j<4; j++){
			if(numeros[j] > numeros[j+1]){
				temp = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = temp;
			}
		}
	}

	for(int i=0; i<5; i++){
		cout << numeros[i] << endl;
	}
}

