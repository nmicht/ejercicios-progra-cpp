#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    float n;

    cout << "Dame un numero";
    cin >> n;

    if(n > 0)
    {
        cout << "Positivo";
    }
    else //si no es positivo
    {
        if(n < 0)
        {
            cout << "Negativo";
        }
        else
        {
            cout << "Neutro";
        }
    }
    return 0;
}
