#include <iostream>

#define PRECIOBIROTE 4.5
#define PRECIOFRIJOL 15.0
#define PRECIOQUESO 65.0
#define IVA 16.0

using namespace std;

//Tienda
int main(int argc, char* argv[]){
    //Declaración de variables
    int cant_birotes=0, cant_frijoles=0;
    float cant_queso=0, subtotal=0, iva=0, total=0, pago=0, cambio=0;

    //Pido datos
    cout << "Cuantos birotes quieres? ";
    cin >> cant_birotes;
    cout << "Cuantos botes de frijoles quieres? ";
    cin >> cant_frijoles;
    cout << "Cuantos gramos de queso quieres? ";
    cin >> cant_queso;

    //Calcular el subtotal
    subtotal = cant_birotes * PRECIOBIROTE +
               cant_frijoles * PRECIOFRIJOL +
               cant_queso * (PRECIOQUESO / 1000);

    //Calcular el iva
    iva = subtotal * (IVA / 100);

    //Total
    total = subtotal + iva;

    //Mostrar el total a pagar
    cout << "Subtotal: $" << subtotal;
    cout << "Iva: $" << iva;
    cout << "Total: $" << total;

    //Preguntar por el pago
    cout << "Con cuánto vas a pagar? ";
    cin >> pago;

    //Calcular el cambio
    cambio = pago - total;

    //Decirle cuanto le sobra
    cout << "Tu cambio son $" << cambio;

    return 0;
}
