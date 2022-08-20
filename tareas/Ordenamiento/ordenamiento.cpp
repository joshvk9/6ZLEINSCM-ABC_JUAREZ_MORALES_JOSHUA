/*
Deberán de implementar el algoritmo de ordenamiento de burbuja para el siguiente caso:
Deberán de tener 2 estructuras uno para la fecha y otro para una lista de trabajadores 
que solicite: código, nombre, apellido y fecha de nacimiento por dia, mes, año,
A partir de ello deberán de programar los métodos que se encarguen de:
leer al personal
ordenar por la fecha al personal
mostrar el listado del personal
imprimir lista de personal en archivo txt ordenado de mayor a menor por fecha de nacimiento
Tomar en cuenta el año bisiesto para su lectura, ordenamiento y guardado
*/

#include<iostream>
#include<string.h>
#include<conio.h>

#define MAX 50
struct fecha
 {
  char dia[3];
  char mes[3];
  char anio[5];

 };
struct trabajador
 {
  char codigo[9];
  char nombre[MAX];
  char apellido[MAX];
  struct fecha nacimiento;

 };
 
 using namespace std;

 void leerpersonal(int,struct trabajador[]) ;
 void ordenaxfecha(int,struct trabajador[]) ;
 void listado(int,struct trabajador[]) ;
 int bBinariafecha(int,struct trabajador[],struct fecha) ;
int main(void)
 {int n,pos ;
struct fecha f;                                                                               
struct trabajador x[MAX] ;
 
 cout<<"Ingresa el folio de trabajadores:" ;cin>>n ;
 leerpersonal(n,x) ;
 ordenaxfecha(n,x) ;
 listado(n,x) ;
 cout<<"Ingresa la fecha a buscar: "<<endl ;
 cout<<"Ingresa el dia:" ;cin>>f.dia ;
 cout<<"Ingresa el mes:" ;cin>>f.mes ;
 cout<<"Ingresa el año:" ;cin>>f.anio ;
 pos=bBinariafecha(n,x,f) ;
 if(pos==-1)cout<<"Trabajador no encontrado";
 else cout<<"Trabajador numero "<<pos;

 getch();
 }


 void leerpersonal(int n,struct trabajador x[])
 {for(int i=0;i<n;i++)
 {cout<<"Ingresa el Folio:";cin>>x[i].codigo;
 cout<<"Ingresa el apellido:";cin>>x[i].apellido;
 cout<<"Ingresa el nombre:";cin>>x[i].nombre;
 cout<<"Ingresa el diade  nacimiento:";cin>>x[i].nacimiento.dia;
 cout<<"Ingresa el mes de nacimiento:";cin>>x[i].nacimiento.mes;
 cout<<"Ingresa el año de nacimiento:";cin>>x[i].nacimiento.anio;
 cout<<endl;
 }
}
 void ordenaxfecha(int n,struct trabajador x[])
 {struct trabajador temp;
 char f1[9],f2[9];
 for(int i=1;i<n;i++)
 for(int j=n-1;j>=1;j--)
 {strcpy(f1,"");strcpy(f2,"");
 strcat(f1,x[j-1].nacimiento.anio);
 strcat(f1,x[j-1].nacimiento.mes);
 strcat(f1,x[j-1].nacimiento.dia);
 strcat(f2,x[j].nacimiento.anio);
 strcat(f2,x[j].nacimiento.mes);
 strcat(f2,x[j].nacimiento.dia);
if(strcmp(f1,f2)>0)
{temp=x[j-1];
x[j-1]=x[j];
x[j]=temp;

}
}
}
void listado(int n,struct trabajador x[])
{cout<<endl<<"Lista de trabajadores.-"<<endl;
for(int i=0;i<n;i++)
cout<<x[i].codigo<<"\t"<<x[i].apellido<<"\t"
<<x[i].nombre<<"\t"<<x[i].nacimiento.dia
<<"/"<<x[i].nacimiento.mes<<"/"<<x[i].nacimiento.anio
<<endl;
cout<<endl;
}
int bBinariafecha(int n,struct trabajador x[],struct fecha f)
{char f1[9],f2[9];
int izq=0,der=n-1,mitad;
while(izq<=der)
{mitad=(izq+der)/2;
strcpy(f1,"");strcpy(f2,"");
strcat(f1,f.anio);
strcat(f1,f.mes);
strcat(f1,f.dia);
strcat(f2,x[mitad].nacimiento.anio);
strcat(f2,x[mitad].nacimiento.mes);
strcat(f2,x[mitad].nacimiento.dia);
if(strcmp(f1,f2)>0)izq=mitad+1;
else if(strcmp(f1,f2)<0)der=mitad-1;
else return mitad;
}
return -1;
}
