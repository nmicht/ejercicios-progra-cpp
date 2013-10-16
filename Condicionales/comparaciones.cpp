#include <iostream>
#include <cstring>  //Para el strcmp
#include <string>   //Para el objeto string

using namespace std;

int main(int argc, char* argv[])
{
    char letra;
    char frase[15];
    string cadena;  //Este es un objeto de tipo cadena

    cout << "Escribe una letra: ";
    cin >> letra;

    cout << "Escribe una frase: ";
    cin >> frase;

    cout << "Escribe otra cadena: ";
    cin >> cadena;

    if ( letra == 'a')  //se ponen apostrofes para comparar caracteres
        cout << "Se presiono la a" << endl;

    //Esa comparación es igual a esta otra
    if ( letra == 97 ) //Se compara con un número que corresponde con su ascii
        cout << "Se presiono la a" << endl;

    //Para comparar cadenas se usa strcmp esperado que devuelva un cero
    //el cero representa que son iguales
    if ( strcmp(frase,"hola") == 0 )
        cout << "Escribiste hola" << endl;


    //Para comparar objetos de tipo cadena se usa compare
    if ( cadena.compare("hola") == 0 )
        cout << "Escribiste hola" << endl;


    return 0;
}
