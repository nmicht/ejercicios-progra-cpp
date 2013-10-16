#include <iostream>

using namespace std;

#define HORA 6.875

int main (int argc, char* argv[])
{
    float horastotales, hraextras, extras, salario;

    cout << "Cuantas horas trabajaste en la quincena? ";
    cin >> horastotales;

    hraextras = horastotales - 80;

    salario = 80 * HORA;
    extras = hraextras * HORA * 2;
    cout << "Salario: $" << salario << endl;
    cout << "Horas extras: $" << extras << endl;
    cout << "Total: $" << salario + extras;

}
