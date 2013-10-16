#include <iostream>

using namespace std;

int main(){
	char frase[100], a=0, e=0, i=0, o=0, u=0;

	cout << "Escribe una frase: ";
	cin.getline(frase);

	for(int x=0; x<100; x++){
		switch(frase[x]){
			case 'a': case 'A':
				a++;
				break;
			case 'e': case 'E':
				e++;
				break;
			case 'i': case 'I':
				i++;
				break;
			case 'o': case 'O':
				a++;
				break;
			case 'u': case 'U':
				u++;
				break;
		}
	}

	cout << "Hay  " << a << " a" << endl;
	cout << "Hay  " << e << " e" << endl;
	cout << "Hay  " << i << " i" << endl;
	cout << "Hay  " << o << " o" << endl;
	cout << "Hay  " << u << " u" << endl;
}
