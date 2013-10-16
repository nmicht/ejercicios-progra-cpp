#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, m=0;
    cout << "Dame numero 1";
    cin >> n1;
    cout << "Dame numero 1";
    cin >> n2;
    cout << "Dame numero 1";
    cin >> n3;

    if(n1 >= n2)
    {
        m = n1;
        if (n3 > m)
        {
            m = n3;
        }
        else
        {
            if(n3 == m)
            {
                cout << "Los numeros son iguales";
            }
        }
    }
    else
    {
        if(n2 >= n3)
        {
            m = n2;
        }
        else
        {
            m = n3;
        }
    }
    cout << "El mayor es " << m;

    return 0;

}
