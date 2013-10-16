#include <iostream>

using namespace std;

int main()
{
    entero m;

    cout << "Dame el numero del mes";
    cin >> m;

    switch( m )
    {
        case 1:
        case 2:
        case 3:
            cout << "1er trimestre";
            break;
        case 4: case 5: case 6:
            cout << "2do trimestre";
            break;
        case 7: case 8: case 9:
            cout << "3er trimestre";
            break;
        case 10: case 11: case 12:
            cout << "4to trimestre";
            break;
        default:
            cout << "Mes invalido";
    }
