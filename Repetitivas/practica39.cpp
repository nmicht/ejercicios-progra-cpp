#include<iostream>

using namespace std;

int main()
{
    int totaltablas, nmultp;

    do
    {
        cout << "Cuantas tablas quieres? ";
        cin >> totaltablas;
    }
    while(totaltablas <= 0);

    do
    {
        cout << "Hasta que número quieres multiplicar? ";
        cin >> nmultp;
    }
    while(nmultp <= 0);

    for (int nt=1; nt <= totaltablas; nt++)
    {
        for(int m=1; m <= nmultp; m++)
        {
            cout << nt << " x " << m << " = " << nt*m << endl;
        }
        cout << endl << endl;
    }

    return 0;
}
