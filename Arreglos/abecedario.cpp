#include <iostream>

using namespace std;

int main(){
	char abc[26];

	for (int i=65; i<=90; i++)
		abc[i-65] = (char) i;
}
