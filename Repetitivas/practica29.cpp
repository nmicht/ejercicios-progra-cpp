#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void delay(int secs)
{
  for(int i = time(NULL) + secs; time(NULL) != i; time(NULL));
}

int main(int argc, char* argv[])
{
    int n=1;

    while( n <= 100 )
    {
        if (n == 5)
            system("PAUSE");
        cout << n << ":" << n << ":" << n << endl;
        n += 1;
        delay(1);
        system("CLS");
    }

}



