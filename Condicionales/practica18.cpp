#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    float n1, n2;

    cout << "Dame el primer numero";
    cin >> n1;
    cout << "Dame el segundo numero";
    cin >> n2;

    if(n1 > n2)
    {
        cout << n1 << " es mayor que " << n2;
    }
    else //si no es positivo
    {
        if(n2 > n1)
        {
            cout << n2 << " es mayor que " << n1;
        }
        else
        {
            cout << "Los numeros son iguales";
        }
    }
    return 0;
}
