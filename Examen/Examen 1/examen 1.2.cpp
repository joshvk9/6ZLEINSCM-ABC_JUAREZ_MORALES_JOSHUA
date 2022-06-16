#include <stdio.h>

int main() {
    int primos, n, d;
    int es_primo;

    printf("Cuantos primos desea mostrar: ");
    scanf("%d", &primos);

    n = 2;
    while (primos > 0) {

        //verificando los numeros si son primos 
        es_primo = 1;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) {
                es_primo = 0;
                break;
            }
        }

        //muestra los numero
        
        if (es_primo) {
            printf("%d ", n);
            primos--;
        }
        n++;
    }

    printf("\n");
    return 0;
}

