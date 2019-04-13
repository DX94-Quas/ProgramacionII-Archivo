#include <iostream>
using namespace std;

/* la funcion crea un reg de activacion, por lo que las operaciones
 * realizadas al n no son permanentes
 * .bss = Block Started by Symbol - variables estaticas
 * .text - codigo del programa
 * .data variables estaticas con valor predefinido
 * */
void funk()
{
	static int contador = 0;
	int n =15;
	cout << n << endl;
	n++;
	contador++;
	cout << n << endl;
}

int main()
{
	funk();
	funk();
	funk();
	return 0;
}
