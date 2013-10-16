#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    float n;

    cout << "Dame un numero";
    cin >> n;

    if(n >= 0)
    {
        cout << "Positivo";
    }
    else
    {
        cout << "Negativo";
    }

    return 0;
}
