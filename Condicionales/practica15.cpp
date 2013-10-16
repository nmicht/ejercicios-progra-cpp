#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    float prom;

    cout << "Dame tu promedio";
    cin >> prom;

    if(prom < 0 || prom > 100)
    {
        cout << "Calificación invalida";
    }
    else //si no fue invalida
    {
        if(prom >= 60)
        {
            cout << "Aprobaste";
        }
        else
        {
            cout << "Reprobaste";
        }
    }
    return 0;
}
