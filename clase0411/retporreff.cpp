#include <iostream>
using namespace std;

int& func( int &a)
{
	cout << a << endl;
	return a;
}

int main()
{
	int x = 10;
	cout << x << endl;
	func(x) = 25;
	cout << x << endl;
	return 0;
}
