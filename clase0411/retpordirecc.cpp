#include <iostream>
using namespace std;

int* func(int n)
{
	int* p = new int(n);
	cout << p << endl;
	for( int i=0; i<n; i++)
	{
		p[i] = i+1;
	}
	return p;
}

int main()
{
	int tam =5;
	int *q = func(tam);
	for( int i=0; i < tam; i++)
	{
		cout << q[i] << endl;
	}
	cout << q << endl;
	return 0;
}
