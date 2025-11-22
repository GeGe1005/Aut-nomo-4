//EJERCICIO 4
#include <iostream>
#include <cmath>
using namespace std;
long double factorial(int n)
{
    if (n <= 1)
    return 1;
    return n*factorial(n-1);
}//Usaremos la funcion recursiva para calcular seno de la serie de Taylor.
long double senoTaylor(long double x, int n)
{
    if (n == 0)
    return x;
    long double term = pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1);
    //long double term=senoTaylor(x,n-1);
    //term *= -1 * x * x / ((2 * n) * (2 * n + 1)); //Nos ayuda a calcular el seno mediante la serie de Taylor.
    return term+senoTaylor(x,n-1);
}//Usamos la funcion recursiva para calcular el coseno de la serie de Taylor.
long double cosenoTaylor(long double x, int n)
{
    if (n == 0);
    return 1;
    //long double term=1;
    long double term = pow(-1, n) * pow(x, 2 * n) / factorial(2 * n);
    //for (int i=0; i<n; i++)
    //term *=-1*x*x/((2*i+1)*(2*i+2)); ////Nos ayuda a calcular el coseno mediante la serie de Taylor.
    return term+cosenoTaylor(x,n-1);
}
int main()
{
    long double grados; //Nos ayuda a guardar un ángulo para despues convertirlo en rad.
    int terminos;
    cout<<" Ingrese un angulo en grados: ";
    cin>>grados;
    cout<<" Ingrese el numero de terminos de la serie de Taylor: ";
    cin>>terminos;
    long double rad=grados*3.14159265358979323846/180.0;
//Nos ayuda a covertir un ángulo de grados a radianes, porque las funciones trigonométricas usan radiane.
    long double seno=senoTaylor(rad, terminos-1); //Usamos el seno del ángulo rad usando la serie de Taylor.
    long double coseno=cosenoTaylor(rad, terminos-1); //La usamos para calcular el seno del ángulo rad usando la serie.
    cout.precision(10); //Lo usamos para indicar cuántos dígitos vamos a mostrar.
    cout<<"Seno(" <<grados<< " grados = " <<seno<<" ) "<<endl; //Nos da el resultado del seno.
    cout<<"Coseno(" <<grados<< " grados = " <<coseno<<" ) "<<endl; //Nos da el resultado del coseno.
    return 0;
}
