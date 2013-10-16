#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

string convertInt(int number)
{
   stringstream ss;
   ss << number;
   return ss.str();
}


int main()
{
	string A, B, R;
	int i, j, m, lleva=0, n1, n2, z=0;

	cout << "Numero A: ";	
	cin >> A;

	cout << "Numero B: ";
	cin >> B;

	i = A.length()-1;
	j = B.length()-1;

	if(i>=j)
		m = i;
	else
		m = j;

	while(m>=0)
	{
		if(i>=0)
			n1 = atoi(A.substr(i,1).c_str());
		else
			n1 = 0;

		if(j>=0)
			n2 = atoi(B.substr(j,1).c_str());
		else
			n1 = 0;
		
		i--;
		j--;
		m--;

		z=n1+n2+lleva;
		
		lleva = 0;
		
		if(z>=10)
		{
			lleva = 1;
			z = z - 10;
		}
		//Convert to string	
		R.insert(0,convertInt(z));
	}	
	if(lleva>0)
		R.insert(0,convertInt(lleva));
	
	cout << R;
}
	

