//EJERCICIO 1
#include <iostream>
using namespace std;
void permutacion(string cadena, int inicio, int fin)
{ // CASO BASE: si ya formamos una permutación
    if (inicio == fin)
    {
    cout<<cadena<<endl;
    return;
    } // CASO RECURSIVO: cambiar letras
    for (int i=inicio; i<=fin; i++)
    {
        char aux=cadena[inicio];
        cadena[inicio]=cadena[i];
        cadena[i]=aux;
        permutacion(cadena, inicio + 1, fin);
        aux=cadena[inicio];
        cadena[inicio]=cadena[i];
        cadena[i]=aux;
// Esto significa volver a dejar el carácter original en su lugar después de haber hecho un intercambio.
    }
}
int main()
{
    string palabra;
    cout<<" Ingrese una palabra: ";
    cin>>palabra;
    permutacion(palabra, 0, palabra.length() - 1);
//length() es una función de std::string que devuelve el número de caracteres que contiene la palabra.
    return 0;
}
