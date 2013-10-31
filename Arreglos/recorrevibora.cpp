#include <iostream>

using namespace std;

int main(){
	int matriz[5][5], tam=5;
	int ini, n, fin;
	int f,c;
	int f1, f2;

for(int f=0; f<tam; f++){
	for(int c=0; c<tam; c++){
		matriz[f][c] = f+1;
	}
}

for(int f=0; f<tam; f++){
	for(int c=0; c<tam; c++){
		cout << matriz[f][c] << " ";
	}
	cout << endl;
}

/* con tres ciclos 
	for(int c=0; c<100; c++){
		if(c==0 || c%2==0)
			for(int f=0; f<100; f++)
				cout << matriz[f][c] << endl;
		else
			for(int f=99; f>=0; f--)
				cout << matriz[f][c] << endl;
	}
*/

/* con dos ciclos 
	for(int c=0; c<tam; c++){
		if(c==0 || c%2==0){
			ini=0;
			n=1;
			fin=tam;
		}
		else{
			ini=tam-1;
			n=-1;
			fin=0;
		}
		for(int f=ini; f!=fin; f=f+n)
			cout << matriz[f][c] << endl;
	}
*/
/* con dos ciclos mas corto*/
	for(c=0; c<tam; c++){
		for(f1=0, f2=tam-1; f1 < tam || f2 >= 0; f1++, f2--)
			if(c==0 || c%2==0)
				cout << matriz[f1][c] << endl;
			else
				cout << matriz[f2][c] << endl;
	}
	return 0;

}
