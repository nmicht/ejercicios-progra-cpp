#include <iostream>

using namespace std;

//centigrados
int main(int argc, char* argv[]){
    //Declaro variables
    float cent;

    //Pido datos
    cout << "Cuantos grados centigrados? ";
    cin >> cent;

    //Calculo y muestro resultado
    cout << cent << "°C corresponden a "
         << (cent * (5.0/9.0) + 32) << "°F";
};
