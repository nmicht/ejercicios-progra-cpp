#include <iostream>

using namespace std;

void hola(int &a){
	a = 5;
}

void hola2(int b[]){
	b[0] = 5;
}

int* algo(int b[]){
	return b;
}

int main(){
	int j=10, z[2]={10,20};
	int* x;
	char* puntero;
	float* puntero2;


	x = algo(z);
	cout << x[0];


	//hola(j);
	//cout << j;

	//cout << "antes " << z[0] << endl;
	//hola2(z);
	//cout << "despues " << z[0];
}
