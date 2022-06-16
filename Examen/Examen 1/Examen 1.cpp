//Libreria

#include<iostream>

using namespace std;

int main(){
	
	//Pedirle al usuria que ingrese un numero 
	long long int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	//Dar el resultado de impar o par 
	//lo que hace es dividir entre 2 y dar la respuesta  
	// tambien dice si ingreaste un numero cero 
	if(numero==0){
		cout<<"El numero es cero";
		
	}else if(numero%2==0){
		cout<<"El numero es par";
		
	}else{
		cout<<"El numero es impar";
		
	}
	
	return 0;
}
