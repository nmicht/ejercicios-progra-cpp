#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
    string fecha;
    int d,m,a;

    cout << "Dame la fecha en formato dd:mm:aaaa  ";
    cin >> fecha;

    //Obtengo el dia
    d = atoi(fecha.substr(0,2).c_str());
    //Obtenga el mes
    m = atoi(fecha.substr(3,2).c_str());
    //Obtenga el año
    a = atoi(fecha.substr(6).c_str());

    switch(m)
    {
        case 1: case 3: case 5:
        case 7: case 8: case 10:
        case 12:
            if(d < 1 || d > 31)
            {
                cout << "Fecha invalida";
            }
            else
            {
                cout << "Fecha valida";
            }
            break;
        case 4: case 6: case 9:
        case 11:
            if(d < 1 || d > 30)
            {
                cout << "Fecha invalida";
            }
            else
            {
                cout << "Fecha valida";
            }
            break;
        case 2:
            if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
            {
                if (d < 1 || d > 29)
                {
                    cout << "Fecha invalida";
                }
                else
                {
                    cout << "Fecha valida";
                }
            }
            else
            {
                if (a > 0)
                {
                    if (d < 1 || d > 28)
                    {
                        cout << "Fecha invalida";
                    }
                }
                else
                {
                    cout << "Fecha invalida";
                }
            }
            break;
        default:
            cout << "Fecha invalida";
    }
    return 0;
}
