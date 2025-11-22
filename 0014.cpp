//EJERCICIO 3
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n==0)
        return 0;
    if (n==1)
        return 1;
        return fibonacci(n-1)+fibonacci(n-2);
}//Para encontrar el número Fibonacci en la posición n, debemos de sumar los dos anteriores.
//Usamos la funcion recursiva para contar cuantos Fibonacci están entre 1000 y 2000.
int contar(int n, int cantidad)
{
    int f=fibonacci(n);//Nos ayuda a calcular en n.
    if (f>2000)
        return cantidad;
    if (f>=1000 && f<=2000)
        cantidad++;
    return contar(n+1, cantidad);
}
int main()
{
    int inicio;
    cout<<" Ingrese un numero inicial para comenzar la serie: ";
    cin>>inicio;
    int total = contar(inicio, 0);
    cout<<" Cantidad de numeros Fibonacci entre 1000 y 2000: "
         <<total<<endl;
    return 0;
}
