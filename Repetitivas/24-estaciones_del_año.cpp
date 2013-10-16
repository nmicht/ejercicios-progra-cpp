#include <iostream>
#include <string>

using namespace std;

int main()
{
    entero m, d;

    string fecha;

    cin >> fecha;

    cout << "Dame el numero del mes";
    cin >> m;
    cout << "Dame el día";
    cin >> d;

    switch( m )
    {
        case 4: case 5:
            cout << "Primavera";
            break;
        case 6:
            if (d <= 20)
            {
                cout << "Primavera";
            }
            else
            {
                cout << "Verano";
            }
            break;




        case
            if()
            {
                cout << "";
            }
            else
            {
                cout << "";
            }
            break;
        case
            if()
            {
                cout << "";
            }
            else
            {
                cout << "";
            }
            break;
        case
            if()
            {
                cout << "";
            }
            else
            {
                cout << "";
            }
            break;
        default:
            cout << "Mes invalido";
    }
