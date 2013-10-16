#include <iostream>

#define PI 3.14159

using namespace std;

//Area de un círculo
int main(int argc, char* argv[]){
    //Declaración de variables
    float radio=0, area=0;

    //Pido datos
    cout << "Dame el radio: ";
    cin >> radio;

    //Hago la operacion y muestro
    //el resultado
    area = PI*radio*radio;
    cout << "El area es " << area;

    return 0;
}
