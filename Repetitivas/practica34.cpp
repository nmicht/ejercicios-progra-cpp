#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    /*  Pedir numeros mientras la suma
        no sea 50 */
    int n, suma=0;

    do
    {
        cout << "Da un numero: ";
        cin >> n;
        suma = suma + n;
    }
    while(suma < 50);

    cout << "La suma total fue " << suma;


/* con while */

    while(suma<50)
    {
        cout << "Da un numero: ";
        cin >> n;
        suma = suma + n;
    }

/* con for */

    for (; suma<50; )
    {
        cout << "Da un numero: ";
        cin >> n;
        suma = suma + n;
    }
}
