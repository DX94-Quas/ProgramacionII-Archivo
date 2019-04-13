#include <iostream>
//using namespace std;

int i = 30;

int func(int n)
{
	int i = 15;
	std::cout << i << std::endl;
	return i;
}

int main()
{
	/* 1
	int i = func(10);
	i++;
	cout << i << endl;
	*/
	// 2 
	int i = 15;
	{
		int i =20;
		std::cout << ::i << std::endl;
	}
	std::cout << i << std::endl;
	
	
}
