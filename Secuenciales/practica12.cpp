#include <iostream>

using namespace std;

#define HORA 6.875

int main (int argc, char* argv[])
{
    float horastotales=0;
    float salario_normal=0, salario_extras=0, salario_total=0;

    cout << "Cuantas horas trabajaste en la quincena? ";
    cin >> horastotales;

    salario_normal = horastotales * HORA;

    if(horastotales > 80)
    {
        salario_extras = horastotales - 80 * HORA * 2;
        salario_normal = 80 * HORA;
    }


    cout << "Salario normal es : $" << salario_normal << endl;
    cout << "Horas extras: $" << salario_extras << endl;
    cout << "Total: $" << salario_normal + salario_extras;

}
