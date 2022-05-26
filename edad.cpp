#include<iostream>
using namespace std;
int main(){
	
	int diaNac,mesNac,anioNac,;
	int diaActual,MesActual,anioActual;
	int edad;
	
	cout<<"Ingrese la fecha de nacimiento: "<<endl;
	
	cin>>diaNac;
	cin>>mesNac;
	cin>>anioNac;
	cout<<endl;
	cout<<"ingrese la fehca actual: "<<endl;
	cin>>diaActual;
	cin>>mesActual;
	cin>>anioActual;
	
	if(mesNac<mesActual){
		edad=anioActual-anioNac;
		
	}
	else if(mesNac==mesActual){
		if(diaNac<=diaActual){
			edad=anioActuial-anioNac;
			
		}
		else{
			edad=(anionActual-anioNac)-1;
		}
	}
	
	else if(mesNac>mesActual){
		edad=(anioActual-anioNac)-1;
		
	}
	
	cout<<"Edad de la persona: "<<edad<<enl;
	
	System("pause");
	return 0;
}












