#include <iostream>
#include <math.h>
using namespace std;

//pascalcase AddCapital - 
//camelcase addCapital - Metodos
//proncipio del minimo privilegio - encapsulacion

class Rectangulo
{
	// usando instancia implicita
	public:
		double alto;
		double ancho;

	double calcularPerimetro()
	{
		return (alto + ancho) * 2;
	};
	double calcularArea()
	{
		return alto * ancho;
	};
	double calcularDiagonal()
	{
		return sqrt(pow(alto, 2) + pow(ancho, 2));
	};
};



int main()
{
	//instanciar
	Rectangulo r1, r2, r3;
	r1.alto = 4.5; r1.ancho = 3.2;
	r2.alto = 36; r2.ancho = 25.5;
	r3.alto = 5; r3.ancho = 5;
	cout << r1.calcularDiagonal() << endl;
	cout << r1.calcularPerimetro() << endl;
	cout << r1.calcularArea() << endl;
	cout << r2.calcularDiagonal() << endl;
        cout << r2.calcularPerimetro() << endl;
        cout << r2.calcularArea() << endl;
	cout << r3.calcularDiagonal() << endl;
        cout << r3.calcularPerimetro() << endl;
        cout << r3.calcularArea() << endl;
	return 0;
}
