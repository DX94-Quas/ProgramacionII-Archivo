#include <iostream>
#include "console.h"
#include "vector.h"
#include "queue.h"
#include "stack.h"
#include <sstream>
#include <fstream>
#include <simpio.h>
using namespace std;

int old_main()
{
    istringstream input("Alguien Dose 12345679 batman pepino asdf");
    string nombre, apellido;
    int numero;
    string token;
    Vector<string> tokens;

    input >> nombre >> apellido;
    input >> numero;

    cout << "Nombre: " << nombre << " Apellido: " << apellido << endl;
    cout << "Numero: " << numero << endl;

    while (input >> token)
    {
        tokens.add(token);
    }

    cout << tokens.toString() << endl;

    fstream archivolectura;
    archivolectura.open("readme.txt");

    string linea, linea2;

    getline(archivolectura,linea);
    getline(archivolectura,linea2);

    cout << linea << endl;
    cout << linea2 << endl;
    return 0;
}
