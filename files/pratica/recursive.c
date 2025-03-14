
/*

-> função recursiva sempre causa stack overflow quando o número é maior que 15

#include <stdio.h>

int fatorial(long n) {
    if (n==0||n==1) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}

int main () {
    long numero;
    printf("Número fatorial que deseja:\n");
    scanf("%li", &numero);
    long resultado = fatorial(numero);
    printf("O fatorial de %li é %li", numero, resultado);

    return 0;
}

*/