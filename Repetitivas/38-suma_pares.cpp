#include<iostream>

using namespace std;

int main()
{
    int n, suma=0;

    for (int cont = 1; cont <= 10; cont++)
    {
        cout << "Dame un numero ";
        cin >> n;
        if ( cont % 2 == 0)
            suma += n;
    }

    cout << "La suma es " << suma;
    return 0;
}
