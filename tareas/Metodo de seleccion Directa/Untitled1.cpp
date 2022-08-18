/*Deber�n de realizar una modificaci�n al c�digo presentado en clase de forma tal que:

1.- Se debe de contar con un menu para poder elegir alguno de los 3 m�todos de ordenamiento:
Burbuja, Selecci�n Directa o Inserci�n

2.- Sin importar el la elecci�n se debe de contar con una opci�n para que el usuario agregue tantos n�meros como el desee para ordenar, y despu�s seleccione el m�todo de ordenamiento

3.- Debe de tener la opci�n para volver a repetir el programa hasta que el usuario ingrese lo contrario.

Deberan de entregar los enlaces de replit y github para su ejecucion y/o en vivo
*/
#include <iostream>
#include <conio.h>
#define cls system("CLS");
#define d 4

void burbuja();
void insercion();
void seleccion();
void shell();
using namespace std;

int main(){

int x;
cout<<"\n\tElige una opcion para ordenar";
cout<<endl;
cout<<endl;
cout<<"1.-Ordenamiento por Metodo Burbuja";
cout<<endl;
cout<<"2.-Ordenamiento por Metodo Insercion";
cout<<endl;
cout<<"3.-Ordenamiento por Metodo Seleccion";
cout<<endl;
cout<<"4.-Ordenamiento por Metodo Shell";
cout<<endl;
cout<<endl;
cout<<"Elige una opcion:";
cin>>x;
cout<<endl;
cout<<endl;


switch (x){
case 1:burbuja();
break;
case 2:insercion();
break;
case 3:seleccion();
break;
case 4:shell();
break;
default: cout<<"ERROR EN LA SECCION";
}

getch();
}



void burbuja(){
	char salir;
	int N,Aux,J,opcion;
	int V[10];
	int I;
	int clrscr();

cout<<"Cuantos numeros va a ingresar?, maximo 10:";
cin>>N;
for(I=0; I<N; I++){
	cout<<"Ingrese dato "<<I+1<<":";
	cin>>V[I];
}
for (I=0; I<N-1; I++)
for (J=0; J<(N-1)-I; J++)
if (V[J]>V[J+1]){
	Aux=V[J];
	V[J]=V[J+1];
	V[J+1]=Aux ;
}

cout<<"Los numeros de forma ordenada son:";
for(I=0; I<N; I++)
cout<<endl<<V[I];
getch();
}

void insercion(){
int N,Aux,J,SW;
int V[10];
int I;
int clrscr();

cout<<"Cuantos numeros va a ingresar?, maximo 10:";
cin>>N;
for(I=0; I<N; I++){
cout<<"Ingrese dato "<<I+1<<":";
cin>>V[I];
}

for (I=1; I<N;I++){
	Aux=V[I];
	J=I-1;
	SW=1;

while (SW&&J>=0){
if (Aux<V[J]){
	V[J+1]=V[J];
	J--;
}else
	SW=0;
	}
V[J+1]=Aux;
}

cout<<"Los numeros de forma ordenada son:";
for(I=0; I<N; I++)
	cout<<endl<<V[I];

getch();
}


void seleccion(){
	int J,I,N,K;
	int V[10];
	int Sw;
	int Aux;
	int clrscr();
cout<<"Cuantos numeros va a ingresar?, maximo 10:";
cin>>N;
for(I=0; I<N; I++){
	cout<<"Ingrese dato "<<I+1<<":";
	cin>>V[I];
	}

for(I=0; I<N-1; I++){
	K=I;
for (J=I+1; J<N; J++)
if (V[J]<V[K])
	K=J;

	Aux=V[I];
	V[I]=V[K];
	V[K]=Aux;
}

cout<<"Los numeros de forma decrecciente son:";
for(I=N-1; I>=0; I--)
	cout<<endl<<V[I];
	getch();
}


void shell(){
	int J,I,N,K,INC,TMP;
	int V[10];
	int Sw;
	int Aux;
	int clrscr();
	cout<<"Cuantos numeros va a ingresar?, maximo 10:";
	cin>>N;

for(I=0; I<N; I++){
cout<<"Ingrese dato "<<I+1<<":";
cin>>V[I];
}

INC=N/2;
do{
	for(I=INC; I<N; I++){
	TMP=V[I];
	J=I-INC;
	while ((J>=0)&&(TMP<V[J])){
	V[J+INC]=V[J];
	J-=INC;
	}
	V[J+INC]=TMP;
}
INC/=2;
}

while(INC!=0);

cout<<"Los numeros de forma decrecciente son:";
for(I=0; I<N; I++)
cout<<endl<<V[I];
getch();
}
