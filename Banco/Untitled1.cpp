
package clases;

import java.util.Scanner;

public abstract class ClasePadre_Abstracta{
	
	protected int transacciones, retiro,  deposito;
	private  static int saldo;
	Scanner entrada = new Scanner(System.in);
	
	public void Operaciones(){
		
		int bandera =0;
		int seleccion = 0;
		do{
		}
		do{
			System.out.println("Bienvenido a BBVA, Porfavor selecione una opcion:");
		    System.out.println("	1. consulte de saldo.");
		    
		    System.out.println("	2. Retiro de efectivo.");
		    System.out.println("	3. Deposito de efectivo.");
		    System.out.println("	4. salir.");
		    
		    seleccion = entrada.nextInt();
		    
		    if(seleccion >=1 && seleccion <=4){
		    	bandera == 1;
		    	
			}else {
				System.outprintln("Operacion no disponible, vuelva a intentar porfavor ");
			}
		    
		}while(bandera == 0);
		 
		 if(seleccion == 1){
		 	ClasePadre_Abstracta mensajero= new ClasHijas_consulta();
		 	mensajero.Transacciones();
		 	
		 }else if(seleccion == 2){
		 	ClasePAdre_Abstracta mensjero = new ClaseHija_Retiro();
		 	mensajero.Transacciones
		 	
		 }else if(seleccion==3){
		 	ClasePAdre_Abstracta mensajero = new ClaseHija_Deposito();
		 	mensajer.Transacciones();
		 	
		 }else if(seleccion == 4){
		 	System.out.println("Gracias, vuelva pronto");
		 	bandera = 2;
		 }
		
	    }while(bandera !=2);
		
	}
	
	public void Retiro(){
		retiro =entrada.nextInt();
		
	}
	
	public void Deposito(){
		deposito =entrada.nextInt();
	}
	
	
	public abstract void Transacciones();
	
	public int getSaldo(){
		return saldo;
		
		
	}
	
	public void setSaldo(int saldo){
		this.saldo = saldo;
		
	}
}



1) Clase ClaseHija_Consulta 

packge clases;



public class ClaseHija_Consulta extends ClasePAdre_Abstracta{
	@Overrride 
	public void Transacciones(){
		system.out.println("Tu saldo es actuales: " + getSaldo());
		
	}

}

2) Clase  ClaseHija_Retiro

packge clase;

public class ClaseHija_Retiro extends ClasePAdre_Abstracta{
	
	@overrride
    public void Transacciones(){
    	
    	System.out.println("Cuanto deseas retirar: ");
    	retiro();
    	if(retiro < getSaldo()){
    		transacciones = getSaldo();
    		setSaldo(Transcciones - retiro);
    		System.out.println("REtiraste : " + retiro);
    		System.out.println("Tu saldo actual es: + getSaldo"());
    		
    		
		}else {
			System.out.println("Saldo insuficiente ");
			
		}
		
	}
}


3)Clase ClaseHijas 

pack clases;

public class ClaseHija_deposito entends ClasePadre_abstracta{
     @overrride
	 public void Transacciones(){
     	System.out.print("Cuanto deseas  depositar: ");
     	Deposit();
     	
     	transacciones = getSaldo();
     	setSaldo(transacciones + deposito);
     	System.out.println("Deposiaste: " + deposito);
     	System.out.println("tu saldo actual es: " + getSaldo);
     	
     	
     	
	 }
}




4)Clase ClasesPrincipal

package clases;

public class ClasePrincipal{
	
	public static void main(String[]){
		
		ClasePadre_Abstracta mensajero = new ClaseHija_Consulta();
		mensajero.setSaldo(15000);
		mensajero.Operaciones();
		 
	}



}
































