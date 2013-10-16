#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    float prom;

    cout << "Dame tu promedio";
    cin >> prom;

    if(prom >= 60)
    {
        cout << "Aprobaste";
    }
    else
    {
        cout << "Reprobaste";
    }

    return 0;
}
