#include <iostream>
using namespace std;


// RECURSION FRONTAL - debe llegar al caso base para trabajar
// RECURSION DE COLA - trabaja sin llegar al caso base
int factorial(int x)
{
	if(x > 0)
	{
		return x * factorial(x - 1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int k = 6;
	int t = factorial(k);

	cout << t << endl;
	return 0;
}
