//EJERCICIO 5
#include <iostream>
#include <cmath> //Usaremos cmath para calcular el ceil.
using namespace std;
void calcularIngredientes(int galletas, int &harina, int &azucar, int &huevos)
//Usamos & para que no afecte a la variable main()
{
    harina = galletas * 2; //2 tazas de harina por galleta
    azucar = galletas * 1; //1 taza de azúcar por galleta
    huevos = ceil(galletas / 2.0); //1 huevo por 2 galletas
}
int huevosRecursivo(int galletas)
{
    if (galletas <= 2)
    return 1;
    return 1 + huevosRecursivo(galletas - 2);
}
int main()
{
int galletas;
char opcion;
do
    {
        cout << "Cuantas galletas quieres hacer? ";
        cin >> galletas;
        int harina, azucar, huevos;
        calcularIngredientes(galletas, harina, azucar, huevos);
        cout<<" Necesitaras: "<<endl;
        cout<<harina<<" tazas de harina"<<endl;
        cout<<azucar<<" tazas de azucar"<<endl;
        cout<<huevos<<" huevos (calculado con funcion normal)"<<endl;
        int huevosR = huevosRecursivo(galletas);
        cout<<huevosR<<" huevos (calculado con funcion recursiva)"<<endl;
        if (galletas > 25)
        cout<<" Que alegria, saldran muchas galletas!! "<<endl;
        cout<<" Quieres calcular para otra cantidad de galletas?: ";
        cin>>opcion;
    } while(opcion =='s'||opcion =='S');
    return 0;
}
