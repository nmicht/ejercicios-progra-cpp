#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 100;

    do
    {
        cout << n << endl;
        n -= 2;
    }
    while( n >= 0 );

}
