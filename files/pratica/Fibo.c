//
// Created by alvaro on 31/03/25.
//
#include <stdio.h>
//função para calcular a série de Fibonacci
void fibonacci(int n) {
    int primeiro = 0, segundo = 1, proximo, i;

    printf("Série de Fibonacci até o %dº termo:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d ", proximo);
    }
}
int main() {
    int n;

    printf("Digite o número de termos da série de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um número positivo.\n");
    } else {
        fibonacci(n);
    }

    return 0;
}

