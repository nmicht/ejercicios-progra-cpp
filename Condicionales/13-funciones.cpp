#include <iostream>

using namespace std;

void test (int a=3, int b=2){
    cout<<a<<b;
}

int main (int argc, char* argv[])
{
    test(1);
    test(1,2);
    test(,2);
    test();
}
