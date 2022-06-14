#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

void escribirtexto();

int main(){
	escribirtexto();
	
	system("pause");
	return 0;
} 

//Crear archivo General 
void escribirtexto(){
	ofstream archivo;
	string nombreArchivo,texto;
	char rpt;
	//Preguntar
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	//Creamos el archivo
	
	archivo.open(nombreArchivo.c_str(),ios::out);
	
	//Errores de archivo 
	
	if(archivo.fail()){ 
		cout<<"Error abrir el archivo";
		exit(1);
	}
	
	//Escribir un texto y guardar el txt
	do{
		fflush(stdin);
		cout<<"Escriba un texo: ";
		getline(cin,texto);
		archivo<<texto<<endl;
		
		cout<<"\nQuiere escribir otro texto(S/N): ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	//Cerramos el archivo
	archivo.close();
}

