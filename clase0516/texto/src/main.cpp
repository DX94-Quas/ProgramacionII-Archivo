// Palabras unicas con Sets
// palabra mas larga: caracteres y palabra misma
// promedio de caracteres
#include <iostream>
#include "console.h"
#include "vector.h"
#include "queue.h"
#include "stack.h"
#include "set.h"
#include <sstream>
#include <fstream>
#include <simpio.h>
#include <algorithm>
using namespace std;
static string palabrota;
static int mayorsote;
static Set<string> conjunto;

int contarPalabras(string frase)
{
    istringstream palabras(frase);
    string palabra;
    int nroPalabras = 0;
    while (palabras >> palabra) {
        nroPalabras++;
        if(palabra.length() > palabrota.length())
        {
            palabrota = palabra;
            mayorsote = static_cast<int>(palabra.length());
        }
        conjunto.add(palabra);
    }
    return  nroPalabras;
}

int main()
{
    ifstream archivoLectura;
    int palabras, caracteres, chars =0;
    int contadorLinea = 0;
    archivoLectura.open("readme.txt");
    string linea;
    while (getline(archivoLectura,linea))
    {
        contadorLinea++;
        caracteres = static_cast<int>(linea.length());
        palabras = contarPalabras(linea);
        cout << " Linea: " << contadorLinea
             << ", Palabras: " << palabras
             << ", Caracteres: " << caracteres - 1 << endl;
        chars += caracteres;
    }
    cout << " Promedio de chars: " << chars / contadorLinea
         << endl
         << " Palabra mas larga: " << palabrota
         << " Numero de letras: " << mayorsote
         << endl
         << " Palabras Unicas: " << conjunto.toString()
         << endl;
    return 0;
}
