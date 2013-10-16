#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    /*  Pedir numeros y sumarlos mientras no
        sea negativo */

    int n, suma=0;

    do
    {
        cout << "Da un numero: ";
        cin >> n;
        if (n >= 0)
            suma = suma + n;
    }
    while(n >= 0);

    //suma = suma - n;
    cout << "La suma total fue " << suma;


/* con while

    while(suma<50)
    {
        cout << "Da un numero: ";
        cin >> n;
        suma = suma + n;
    }

/* con for

    for (; suma<50; )
    {
        cout << "Da un numero: ";
        cin >> n;
        suma = suma + n;
    }
    */
}
