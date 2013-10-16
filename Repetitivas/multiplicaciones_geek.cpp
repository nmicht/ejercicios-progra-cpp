#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string num1, num2;
    int tam1, tam2, n1, n2, res=0;

    cout << "Da el primer multiplicador ";
    cin >> num1;

    cout << "Da el segundo multiplicador ";
    cin >> num2;

    tam1 = num1.length();
    tam2 = num2.length();

    for(int i=0; i< tam1; i++)
    {
        n1 = atoi(num1.substr(i,1).c_str());

        for (int j=0; j<tam2; j++)
        {

            n2 = atoi(num2.substr(j,1).c_str());
            res += n1*n2;
        }

    }

    cout << res;
}
