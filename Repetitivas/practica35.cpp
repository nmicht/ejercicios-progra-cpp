#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    /*  Imprimir nombre 10 veces */
    int n=1;

    do
    {
        cout << "Michelle" << endl;
        n = n+1;
    }
    while(n<=10);




/* con while */

    while(n<=10)
    {
        cout << "Michelle" << endl;
        n = n+1;
    }

/* con for */

    for (n=1; n<=10; n++)
    {
        cout << "Michelle" << endl;
    }
}
