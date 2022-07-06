//ejemplo de una  cola primeras entradas y primeras salidas
#include<iostream>

using namespace std;

//estrucutra
struct nodo{
	int nro;
	struct nodo *siguiente;
};
//estrucuta cola

struct cola{
   nodo *delante;
   nodo *atras;
   
   
};

//encolar

void encolar(struct cola &q, val......or){
	//lo que hay adentro de la cola
	struct nodo * aux = new(struct nodo);
	
	aux->nro = valor;
	aux->siguiente = NULL;
	
	if(q.delante == NULL){
		q.delante = aux; //encolarel primer elementos 
		
	}else{
		(q.atras)->siguiente = aux;
		
	}
	//el puntero siempre apunta al ultimo 
	q.atras = aux;
	
}

//Desencolar 
int desencolar(struct cola &q){
	int num;
	struct nodo * aux;
	
	//aux apunte al inicio de la cola
	aux = q.delante;
	num = au->nro;
	//dale deLete a  aux
	delete(aux);
	return num;
	
}

//mostrar colas 
void mustraCola(struct cola q){
	//nodo auxiliar 
	struct nodo *aux;
	
	//siempre el nodo hasta adelante 
	aux = q.delante;
	//cola vacia?
	while(aux!=NULL){
		cout<<" "<<aux->nro;
		//Recorrer 
		aux = au->siguiente;
	}
	
}

//vaciar la cola, elimninar todo 

void vaciarCola(struct cola &q){
	//auxiliar para elininar cada elementos 
	struct nod * aux;
	//si esta vacia?
	
	while(q.delant!=NULL){
		q.delante = aux->siguiente;
		delente(aux);
		
	}
	q.delante = NULL;
	q.atras = NULL;
}

void menu(){
	cout<<"Ejemplos  de una colita Kawaii\n";
	cout<<"1.- Escolar\n";
	cout<<"2.- Desconlar\n";
	cout<<"3.- Morar cola\n";
	cout<<"4.- Vaciar cola\n";
	cout<<"5.- Salir\n";
	
}

int main(){
	//primero declaramos la cola
	struct cola q;
	
	//defino la  colacon su apuntadores
	q.delante = NULL;
	q.atras = NULL;
	
	//datos
	int dato;
	int op;
	int x; //Funcion de pop a la cola
	
	do{
		menu();
		cin>>op;
		swith(op){
			case 1:
				cout<<"\n Numero a Ecolar: \n";
				cin>>dato;
				encolar(q, dato);
				cout<<"\n Nume : "<<dato<<"encolardo\n";
				break;
			case 2:
				x = desencolar(q);
				cout<<"\n Numero: "<<x<< "desencolado\n";
				break;
				
		    case 3:
		    	cout<<"\n Mostrar cola: \n"
		    	//saber que no este NULL
		    	if(q.delante !=NULL) muestrarCola(q);
		    	else cout<<"\n Cola vacia...n";
		    	break;
		    case 4:
		    	vaciarCola(q);
		    	cout<<"\n Colita se vacio..";
		    	break;
		    
		}
	}while(op!=5);
	
	return 0;
	
}


















