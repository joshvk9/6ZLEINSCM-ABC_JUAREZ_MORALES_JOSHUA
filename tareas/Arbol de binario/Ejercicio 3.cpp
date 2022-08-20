//Ejercicio 3
/*
Especificar e implementar una función booleana que, dados dos árboles binarios, indique si el
primero es inferior al segundo. Diremos que un árbol binario es inferior a otro, si los elementos del primero, en
los nodos coincidentes en posición, son menores que los del segundo (ver figura).
*/
#include <iostream>
using namespace std;

int main ()
{
    int acd = 1, numLineas;
    cout << "Ingrese el numero de lineas para su arbol: ";
    cin >> numLineas;
    for (int x = numLineas; x != 0; x--){
        cout.width(x);
        for (int n = 0; n < acd; n++){
            cout << "*";
        }
        acd += 2;
        cout << endl;
    }
    for (int x = ((acd - 2) / 2 - 3) / 2; x != 0; x--){
        cout.width((acd * 40) / 100);
        for (int n = 0; n < (acd * 20) / 100; n++){
            cout << "*";
        }
        cout << endl;
    }
    for (int x = 2; x != 0; x--){
        cout.width((acd * 30) / 100);
        for (int n = 0; n < (acd * 40) / 100; n++){
            cout << "*";
        }
        cout << endl;
    }
   
    return 0;
}
