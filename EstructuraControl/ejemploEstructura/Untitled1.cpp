#include <iostream>

using namespace std;

int main(){
	
	/*
	"ejemplo 1"
	//vamos a crar un do while 
	int i =1;
	do{//haz
		//imprima cada  elementos hasta el 10 
		cout<<i<<endl;
		i++;
		
		
	}while(i<=10);
	
	
	

*/
/*
    "ejemplo 2"
    //while
    int cont =1;
    while(cont <= 10){
    	cout<<cont<<endl;
    	cont++;
    	
	}
	cout<<"wiii se acabo";
*/
/*ejemplo 3
    int contador = 1;
    while(contador <= 20){
    	cout<<"debo hacer la tarea T_T"<<" "<<contador<<endl;
	    contador++;
    	
	}
	cout<<"wiii se acabo";

*/

/*
    //ejemplo 4
    //for
    for(int i =1; i<= 10; i++)
        cout<<i<<endl;
*/


    //menu 
    int seleccion, 1;
    do{
    	cout<<"\n Menu 1, 2, 3, otra opcion es salir \n";
    	cout<"1: opcion\n";
    	cout<"2: opcion\n";
    	cout<"3: opcion\n";
    	cout<"Otra opcion salir\n";
    	cout<"Ingrese .a seleccion\n";
    	
    	cin>>seleccion;
    	
    	switch(seleccion){
    		case 1:
    			cout<<"opcion 1";
    			brack;
    	    case 2:
    	    	cout<<"opcion 2";
    	    	breack;
    	    case 3:
    	    	cout<<"opcion 1";
    			brack;
    		default:
    			cout<<"ayos";
    			brack;
		}
	}while((seleccion > 0)&&(seleccion < 4));
}
	
	
