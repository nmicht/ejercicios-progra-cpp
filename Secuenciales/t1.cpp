#include <iostream>

using namespace std;

#define PI 3.1416

int main (int argc, char* argv[])
{
    //Perimetro de circulo
    int radio;

    cout << "Dame el radio";
    cin >> radio;

    cout << "El perimetro es " << PI * radio * 2;
}
