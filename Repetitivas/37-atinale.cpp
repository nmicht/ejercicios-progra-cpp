#include<iostream>

using namespace std;

#define GANADOR 666

int main()
{
    int n,cont=0;

    do
    {
        cout << "Atinale al numero ";
        cin >> n;
        cont++;
    }
    while(n != GANADOR);

    cout << "Felicidades le atinaste en " << cont << " intentos";

    return 0;
}
