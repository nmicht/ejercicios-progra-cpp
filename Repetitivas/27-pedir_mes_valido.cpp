#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int mes=0;

    for(;mes < 1 || mes > 12;)
    {
        cout << "Dame el mes";
        cin >> mes;
    }


    cout << "Felicidades";
}
