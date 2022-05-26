#include<iostream>

using namespace std;

int main(){
	
	/*
	ejemplo de arreglo introducir daos
	*/
	
	floart vector1[3];
	floart vector2[3];
	floart vectorSuma[3];
	
	int i = 0;
	
	//introducir los ele entos primer vector
	
	
	cout<<"\n introduce el primer componente "<<i<<" del primer vecto \n";
	cin>>vector1[i];
	
	for(i=0; i<3; i++){
		cout<<"\n introducie  el primer componente"<<i<<" del primer vector \n";
		
	}
	
	//calculo de  la suma 
	
	for(i=0 i<3; i++){
		
		vectorSuma[i] = vector1[i] + vector2[i];
		
	}
	
	cout<<"\nLa suma de los vector es: \n";
	for(i=0 i<3; i++){
		cout<<vectorSuma[1] << " ";
	}
	          
	 
	
}
