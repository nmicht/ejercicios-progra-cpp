#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char* argv[])
{
    //Hipotenusa
    int co, ca;

    cout << "Dame el cateto opuesto";
    cin >> co;
    cout << "Dame el cateto adyacente";
    cin >> ca;

    cout << "La hipotenusa es " << sqrt(co*co + ca*ca);
}
