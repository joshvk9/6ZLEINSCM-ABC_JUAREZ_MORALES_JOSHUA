/*Deberan de desarrollar un programa donde se simule el algoritmo de
Kruskal a partir de ingresar el numero de nodos y vertices asi como sus pesos
Mi trabajo
*/

#include <stdio.h>
#include <algorithm>
#include <cstring>

#define MAX 1005  //maximo numero de v?rtices


int padre[ MAX ]; 


void MakeSet(int n){
    for(int i = 1 ; i <= n ; ++i) padre[i] = i;
}


int Find(int x){
    return (x == padre[x]) ? x : padre[x] = Find(padre[x]);
}


void Union(int x , int y){
    padre[Find(x)] = Find(y);
}


bool sameComponent( int x , int y ){
    if( Find(x) == Find(y) ) return true;
    return false;
}


int V , E;    

struct Edge{
    int origen;    
    int destino;    
    int peso;       
    Edge(){}

    bool operator<(const Edge &e) const {
        return peso < e.peso;
    }
}arista[MAX];      
Edge MST[MAX];    

void Kruskal(){
    int origen , destino , peso;
    int total = 0;         
    int numAristas = 0;    

    MakeSet(V);          
    std::sort(arista , arista + E);    

    for( int i = 0 ; i < E ; ++i ){     
        origen = arista[i].origen;  
        destino = arista[i].destino; 
        peso = arista[i].peso;      

  
        if(!sameComponent(origen , destino ) ){  
            total += peso;            
            MST[numAristas++] = arista[i]; 
            Union(origen, destino);  
        }
    }


    if(V - 1 != numAristas){
        puts("No existe MST valido para el grafo ingresado, el grafo debe ser conexo.");
        return;
    }
    puts("El MST encontrado contiene las siguientes arista");
    for(int i = 0 ; i < numAristas ; ++i)
        printf("( %d , %d ) : %d\n", MST[i].origen , MST[i].destino, MST[i].peso); 

    printf("El costo minimo de todas las aristas del MST es : %d\n" , total);
}

int main(){
    int mst;

    scanf("%d %d" , &V , &E);


    for(int i = 0 ; i < E ; ++i)
        scanf("%d %d %d" , &arista[i].origen, &arista[i].destino, &arista[i].peso);

    Kruskal();

    return 0;
}
