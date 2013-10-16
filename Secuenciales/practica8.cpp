#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    int dinero = 0;

    cout << "Cuanto dinero quieres? $";
    cin >> dinero;

    cout << "Se te entregaran..." << endl;

    cout << "$1000 - " << dinero / 1000 << endl;
    dinero = dinero % 1000;

    cout << "$500 - " << dinero / 500 << endl;
    dinero = dinero % 500;

    cout << "$200 - " << dinero / 200 << endl;
    dinero = dinero % 200;

    cout << "$100 - " << dinero / 100 << endl;
    dinero = dinero % 100;

    cout << "$50 - " << dinero / 50 << endl;
    dinero = dinero % 50;

    cout << "$20 - " << dinero / 20 << endl;
    dinero = dinero % 20;

    cout << "$10 - " << dinero / 10 << endl;
    dinero = dinero % 10;

    cout << "$5 - " << dinero / 5 << endl;
    dinero = dinero % 5;

    cout << "$2 - " << dinero / 2 << endl;
    dinero = dinero % 2;

    cout << "$1 - " << dinero / 1 << endl;
    dinero = dinero % 1;

    return 0;
}
