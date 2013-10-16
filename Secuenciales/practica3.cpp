#include <iostream>

using namespace std;

//Perimetro de un cuadrado
int main(int argc, char* argv[]){
    //Declaración de variables
    float l=0;

    //Pido datos
    cout << "Da la medida de un lado: ";
    cin >> l;

    //Hago la operacion y muestro
    //el resultado
    cout << "El perimetro " << l*4;

    return 0;
}
