#include <iostream>
#include <cstdlib>
#include <ctime>

//Para definir CLS o CLEAR dependiendo el OS
#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif


using namespace std;

void delay(int s)
{
    for(int i = time(0) + s; time(0) != i; time(0));
}

int main(int argc, char* argv[])
{
    int h = 0, m = 0, s = 0, ms = 0;


    while(m<=1)
    {
        system(CLEAR);
        cout <<endl<<endl<<endl<<endl<<"\t\t\t\t";
        cout << h <<":" << m << ":" << s << endl;
        s++;
        if (ms == 60)
        {
            s += 1;
            ms = 0;
        }
        if (s == 60)
        {
            m += 1;
            s = 0;
        }
        if (m == 60)
        {
            h += 1;
            m = 0;
        }
        delay(1);
    }
}



