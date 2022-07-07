// vamos a ver una cola que aitende por prioridades 

#include <iostream>
#include<stdlib.h>

using namespace std;

//definir el nodo

struct nodo{
	char dato;
	int priori;
	struct nodo *siguiente;
	
};

//la cola 

struct cola{
	nodo *delate;
	nodo *atras;
	
};

//crar nodo

struct nodo*crearNodo(chat x, int pri){
	struc nodo *nuevoNodo = new(struct nodo);
	nuevaNodo->dato = x;
	nuevaNnodo->priori = pri;
	return nuevoNodo;
	
}

void encolar(struct cola &q, char valor, int prio){
	//auxiliar para mover el nodo
	struct nodo *aux = crearNodo(valor, priori);
	aux->siguiente = NULL;
	if(q.delante == NULL){
		//el primero en encolar
		q.delante = aux;
		
	}else{
		(q.atras)->siguiente 0 aux;
		
	}
	//siempre debe apuntar al ultimo 
	
	q.atras = aux;
	
}

//mostrar la cola

void muestrarCola(struct cola q){
	struct nodo *aux;
	
	aux = q.delante;
	
	cout<<"\n Caracter de prioridad\n";
	
	while(aux"=NULL"){
		cout<<" "<<aux->dato<<" | "<<aux->priori<<endl;
		aux aux->siguiente;
		
	}
}

//definir una prioridad 
//crite 0 

void ordenarPrioridad(strcut cola &q){
	//metod de burbuja 
	
	//necesito dos aux 
	struc nodo *aux1, *aux2;
	int p_aux;
	char c_aux;
	
	//auz1 va a ser mi colita con los datos 
	aux1 = q.delante;
	
	while}(aux1->siguiente !=NULL){
		//comparar aux1 vs aux2
		aux2 = aux1->siguiente;
		
	}
}
















