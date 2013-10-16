#include <iostream>

using namespace std;

int main(){
	int cals[100];

	for(int i=0; i<100; i++){
		cout << "Dame la calificacion " << i << ": ";
		cin >> cals[i];
		prom += cals[i];
	}

	prom /= 100;

	cout << "El promedio es: " << prom;
}
