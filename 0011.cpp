//EJERCICIO 2
#include <iostream>
using namespace std;
// Nuestra función recursiva, buscara si es primo.
bool esPrimo(int num, int divisor)
{
    if(num<2)
        return false;
    if(divisor==1)
        return true;
    if(num%divisor==0)
        return false;
    return esPrimo(num, divisor - 1);
}// Función recursiva que busca el primo más grande menor que n
int primoMenor(int n)
{
    if(n<=2)
        return -1; //No va a existir primos menor a 2.
    if(esPrimo(n-1, (n-1)/2))
//Aquí buscaremos si n-1 es primo y despues lo enviamos como primer parámetro:
        return n-1; //Buscara el numero primo.
    return primoMenor(n-1);
}
int main()
{
    int n;
    cout<<" Ingrese un numero entero positivo: ";
    cin>>n;
    int resultado=primoMenor(n);
    if(resultado==-1)
        cout<<" No existe un primo menor que "<<n;
    else
        cout<<" El primo mas grande menor que "<<n<<" es: "<<resultado;
    return 0;
}
