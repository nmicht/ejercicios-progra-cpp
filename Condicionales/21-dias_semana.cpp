#include <iostream>

using namespace std;

int main()
{
    entero d;

    cout << "Dame el numero de la semana";
    cin >> d;

    switch( d )
    {
        case 1:
            cout << "lun";
            break;
        case 2:
            cout << "mar";
            break;
        case 3:
            cout << "mie";
            break;
        case 4:
            cout << "jue";
            break;
        case 5:
            cout << "vie";
            break;
        case 6:
            cout << "sab";
            break;
        case 7:
            cout << "dom";
            break;
        default:
            cout << "error";
    }
