/*
Deberan de programar un ejemplo del algoritmo shell, 
en donde el usuario introduzca n cantidad de numeros y 
se imprima en consola el paso a paso del ordenamiento de 
los mismos
*/

#include <iostream>
using namespace std;
void print(int[], int n);
void shell(int[], int n);

int main()
{
    int total;
    cout << "ingrese ell total de elementos: " << endl;
    cin >> total;
    int num[total];
    for (int i = 0; i < total; i++)
    {
        cout << " Ingrese el elemento [ " << (i + 1) << " ] :" << endl;
        cin >> num[i];
    }
    shell(num, total);
}

void shell(int a[], int n)
{

    int ints, i, aux;
    bool band;
    ints = n;
    while(ints > 1)
    {
        ints = (ints / 2);
        band = true;
        while (band == true)
        {
            band = false;
            i = 0;
            while ((i + ints) <= n)
            {
                if (a[i] > a[i + ints])
                {
                    aux = a[i];
                    a[i] = a[i + ints];
                    a[i + ints] = aux;
                    band = true;
                }
                i++;
                print(a, n);
            }
        }
    }
}

void print(int a[], int n)
{
    cout<<"Elementos ordenados: " << endl;

    for(int i = 0; i < n; i++)
        cout<<"["<<a[i]<<"]";
}
