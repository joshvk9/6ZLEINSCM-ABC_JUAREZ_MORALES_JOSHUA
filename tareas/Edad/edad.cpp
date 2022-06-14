#include<iostream>
using namespace std;
int main(){
	
	int diaNac,mesNac,anioNac;
	int diaActual,MesActual,anioActual;
	int edad;
	
	cout<<"Ingrese la fecha de nacimiento: "<<endl;
	
	cin>>diaNac;
	cin>>mesNac;
	cin>>anioNac;
	cout<<endl;
	cout<<"ingrese la fehca actual: "<<endl;
	cin>>diaActual;
	cin>>MesActual;
	cin>>anioActual;
	
	if(mesNac<MesActual){
		edad=anioActual-anioNac;
		
	}
	else if(mesNac==MesActual){
		if(diaNac<=diaActual){
			edad = anioActual-anioNac;
			
		}
		else{
			edad=(anioActual-anioNac)-1;
		}
	}
	
	else if(mesNac>MesActual){
		edad=(anioActual-anioNac)-1;
		
	}
	
	cout<<"Edad de la persona: "<<edad<<endl;
	
	system("pause");
	return 0;
}












