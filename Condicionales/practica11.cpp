#include <iostream>

using namespace std;


int main (int argc, char* argv[])
{
    float prom;

    cout<<"Cual es tu promedio: ";
    cin>>prom;

    if(prom >= 95)
    {
        prom = 100;
    }

    cout<<"Tu promedio es "<<prom;
}
