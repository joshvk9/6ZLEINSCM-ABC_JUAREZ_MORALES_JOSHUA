/*
vamos a jugar arreglo
*/

#include<iostream>

using names
pace std;

int main(){
	int numero[5] = {200, 150, 100, -50, 300}; //una array de 5 numero enteros
	int suma = 0;
	
	//inicializamos los valores de arreglo
	/*
	numero[0]= 200;
	numero[1]= 150;
	numero[2]= 100;
	numero[3]= 50;
	numero[4]= 300;
	
	
	//hallar la suma de los elementos del arreglo 
	
	suma = numero[0] +numero[1] +numero[2] +numero[3] +numero[4];
	*/
	//ineficiente
	int i;
	for(i = 0; i<=4; i++){
		suma += numero[i];
		cout<<"\nDatos \n\n"<<suma;
	}
	
	cout<<"la suma es: "<<suma;
	
	return 0;
	
}
