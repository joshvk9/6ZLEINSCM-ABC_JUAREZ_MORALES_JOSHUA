#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<iostream>
#include<fstream>
using namespace std;
int menu(){
	int x;
	system("cls");
	    cout<<"1.Agregar datos del alumno"<<endl
	    <<"2.Buscar datos del alumno"<<endl
	    <<"3.Mostrar  alumnos"<<endl
	    <<"4.Borrar  alumnos"<<endl
	    <<"5.Cargar  alumnos"<<endl
	    <<"6.Guardar  alumnos"<<endl
	    <<"7.Salir del programa"<<endl
	    <<"Seleciona una de la opciones: ";
	    	cin>>x;
	        return x; 
}

void agregar(ofstream &es){
	
	system("cls");
	string nombre;
	string grupo;
	string materias;
	string calificaciones;

	es.open("Registros.txt", ios::out | ios::app);
	cout<<"Nombre: ";
	cin>>nombre;
	cout<<"Grupo: ";
	cin>>grupo;
	cout<<"Materias: ";
	cin>>materias;
	cout<<"Calificaciones: ";
	cin>>calificaciones;
	es<<nombre<<" "<<grupo<<" "<<materias<<" "<<calificaciones<<"\n";
	es.close();
}

void buscar(ifstream &lec){
	system("cls");
	lec.open("Registros.txt", ios::in);
	bool encontrado = false;
	string nombre, grado, materias, calificaciones, nombreaux;
	cout<<"Digite el nombre que desea buscar: ";
	cin>>nombreaux;
	lec>>nombre;

	while(!lec.eof() && !encontrado){
		lec>>grado;
		lec>>materias;
		lec>>calificaciones;
		if(nombre == nombreaux){
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Grado: "<<grado<<endl;
			cout<<"Materias: "<<materias<<endl;
			cout<<"Calificaciones: "<<calificaciones<<endl;
			
			
			encontrado = true;
		}
		lec>>nombre;
	}
	lec.close();
	
	
	if(!encontrado)
		cout<<"Error, no se encontro el dato"<<endl;
		system("pause");
}


void verRegistro(ifstream &lec){
	system("cls");
	string nombre;
	string grado;
	string materias;
	string calificaciones;
	lec.open("Registros.txt", ios::in);
	lec>>nombre;
	while(!lec.eof()){
		lec>>grado;
		lec>>materias;
		lec>>calificaciones;
		cout<<"Nombre: "<<nombre<<endl;
		cout<<"Grado: "<<grado<<endl;
		cout<<"Materias: "<<materias<<endl;
		cout<<"Calificaciones: "<<calificaciones<<endl;
	
		lec>>nombre;
	}
	lec.close();
	system("pause");
}

int main(){
	ofstream esc;
	ifstream lec;
	int op;
	do{
		system("cls");
		op = menu();
		switch(op){
			case 1:
				agregar(esc);
				break;
				
			case 2:
				buscar(lec);
				break;
				
			case 3:
				verRegistro(lec);
				break;
		}
	}while(op != 7);
	return 0;
}
