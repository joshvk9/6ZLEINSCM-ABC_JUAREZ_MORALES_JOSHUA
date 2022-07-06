#include <iostream>
using namespace std;
struct nodo{
    string nro;
    struct nodo *sgte;
};
 
struct cola{
    nodo *delante;
    nodo *atras  ;
};
 
void encolar( struct cola &q, string valor ){
     struct nodo *aux = new(struct nodo);
     
     aux->nro = valor;
     aux->sgte = NULL;
     
     if( q.delante == NULL)
         //encola el primero elemento
		 q.delante = aux;
     else
         (q.atras)->sgte = aux;
         //puntero que siempre apunta al ultimo elemento
     q.atras = aux; 
     
}
 
string desencolar( struct cola &q ){
     string num ;
     struct nodo *aux ;
     
     aux = q.delante;      
     num = aux->nro;
     q.delante = (q.delante)->sgte;
     delete(aux);          
     
     return num;
}
 

void muestraCola( struct cola q ){
     struct nodo *aux;
     aux = q.delante;
         
     while( aux != NULL ){
            cout<<"   "<< aux->nro ;
            aux = aux->sgte;
     }    
}
 

void vaciaCola( struct cola &q){
     struct nodo *aux;
     while( q.delante != NULL){
            aux = q.delante;
            q.delante = aux->sgte;
            delete(aux);
     }
     q.delante = NULL;
     q.atras   = NULL;
     
}
 

void menu(){
    cout<<"\n\t Cola de colores \n\n";
    cout<<" 1. Encolar                               "<<endl;
    cout<<" 2. Desencolar                            "<<endl;
    cout<<" 3. Mostrar cola                          "<<endl;
    cout<<" 4. Vaciar cola                          "<<endl;
    cout<<" 5. Salir                                 "<<endl;
 
    cout<<"\n Seleciona una opcion: ";
}
 

int main()
{
    struct cola q;
    q.delante = NULL;
    q.atras   = NULL;
    string dato;  
    int op;      
    string x ; 
    system("color 0E");
 
    do
    {
        menu();  cin>> op;
 
        switch(op)
        {
            case 1:
 
                 cout<< "\n Color de la cola: "; cin>> dato;
                 encolar( q, dato );
                 cout<<"\n\n\t\tColor " << dato << " encolado...\n\n";
            break;
 
 
            case 2:
 
                 x = desencolar( q );
                 cout<<"\n\n\t\tColor "<< x <<" desencolado...\n\n";
            break;
                 
 
            case 3:
 
                 cout << "\n\n  Mostrar cola\n\n";
                 if(q.delante!=NULL) muestraCola( q );
                 else   cout<<"\n\n\t[!] Cola vacia...!"<<endl;
            break;
 
 
            case 4:
 
                 vaciaCola( q );
                 cout<<"\n\n\t\ vaciando< ...\n\n";
            break;
           
         }
 
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    }while(op!=5);
   
   
    return 0;
}
