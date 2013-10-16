#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int mes;

    do
    {
        cout << "Dame el mes";
        cin >> mes;
    }
    while(mes < 1 || mes > 12);

    cout << "Felicidades";
}
