#include <iostream>

using namespace std;

int main()
{
	int tam;
	char sim;

	cout << "Cuanto mide la linea mas larga? ";
	cin >> tam;

	cout << "Que figura quieres? ";
	cin >> sim;

	for(int r=1; r <= tam; r++)
	{
		for(int c=1; c <= r; c++)
			cout << sim;
		cout << endl;
	}
	
	for(int r=tam-1; r >= 1; r--)
	{
		for(int c=1; c <= r; c++)
			cout << sim;
		cout << endl;
	}

}
