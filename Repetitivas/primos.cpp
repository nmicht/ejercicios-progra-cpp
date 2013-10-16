#include <iostream>

using namespace std;

int main()
{
    int final, primo;

    do
    {
        cout << "Da un número positivo ";
        cin >> final;
    }
    while(final <= 0);

    for (int n = 2 ; n <= final; n++)
    {
        for (int div = 2; div < n; div++ )
        {
            if (n % div == 0 )
            {
                primo = 0; //no es primo porque es divisible
                break;
            }
            primo = 1; //Si no fue divisible entonces es primo
        }

        if (primo == 1)
            cout << n << endl;
    }
}
