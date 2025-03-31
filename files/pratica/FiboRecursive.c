#include <stdio.h>
//funcao para calcular Fibonacci (recursivo)
int fibonacci(int n) {
    // Casos base
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}
void imprimirFibonacci(int n) {
    printf("Série de Fibonacci (recursiva) até o %dº termo:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
int main() {
    int termos;

    printf("Digite o número de termos da série de Fibonacci: ");
    scanf("%d", &termos);

    if (termos <= 0) {
        printf("Por favor, insira um número positivo.\n");
    } else {
        imprimirFibonacci(termos);
    }

    return 0;
}