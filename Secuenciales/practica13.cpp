#include <iostream>

using namespace std;


int main (int argc, char* argv[])
{
    float prom;

    cout<<"Cual es tu promedio: ";
    cin>>prom;

    if(prom < 60)
    {
        cout<<"Estas reprobado"<<endl;
    }
    else
    {
        cout<<"Aprobaste"<<endl;
    }

    cout<<"Gracias por usar el programa";
}
