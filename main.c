/**
 *Aulas de Estrutura de Dados
 *Lista 1
 *
 *01) Elaborar um algoritmo para ler um vetor com 10 números inteiros maiores do que 1, calcule e mostre  os  números  primos  e  suas  respectivas  posições no  vetor  (contadas  a  partir  do  número  zero).  Se  não  existir nenhum número primo no vetor, deve-se imprimir uma mensagem no final. Também deve ser feita  a proteção de dados no código, isto é, só devem ser aceitos números inteiros maiores do que 1 na entrada  de dados.
 *
 *
 *int main () {
        int vet[10];
        int cont=0;

        for (int i=0; i<10; i++) {
            printf("Digite o %d número:\n", i+1);
            scanf("%d", &vet[i]);
            if (vet[i]<1) {
                printf("Por favor, digite um número maior que 1:\n");
                scanf("%d", &vet[i]);
            } else {
                printf("Número armazenado!\n");
            }
        }

        for (int i=0; i<10; i++) {
            if (vet[i]!=1&&vet[i]%1==0&&vet[i]%vet[i]==0) {
                printf("PRIMO!: o numero %d, na colocação %d, é primo.\n", vet[i], i+1);
                cont++;
            }
        }

        if (cont==0) {
            printf("Poxa, nenhum primo :(");
        }
        return 0;
    }
 *
 *02) Elaborar um algoritmo que preencha dois vetores de dez elementos inteiros cada um e mostre o vetor  resultante da intercalação entre eles.
 *
 *int main () {
        int x[10];
        int y[10];

        for (int i=0; i<10; i++) {
            printf("Digite o %d número do primeiro vetor: \n", i + 1);
            scanf("%d", &x[i]);
        }

        for (int i=0; i<10; i++) {
            printf("Digite o %d número do segundo vetor: \n", i + 1);
            scanf("%d", &y[i]);
        }

        printf("Vetores intercalados: \n");
        for (int i=0; i<10; i++) {
            printf("%d\t", x[i]);
            printf("%d\n", y[i]);
        }

        return 0;
    }
 *
 *03) Elaborar  um algoritmo  que leia  um  vetor  com  oito números inteiros,  calcule e mostre dois  vetores  resultantes. O primeiro  vetor  resultante deve  conter  os números maiores  ou iguais a zero e  o  segundo  deve conter os números menores do que zero. Cada  vetor resultante  vai  ter, no máximo, oito posições,  que poderão ou não ser completamente utilizadas. Caso nenhum número maior ou igual a zero ou menor  do que zero não seja digitado, deve-se imprimir uma mensagem para o usuário.
 *
 *int main () {
        int vet[8], maiorzero[8], menorzero[8];
        int y = 0, x = 0;

        for (int i=0; i<8; i++) {
            printf("Digite o %d numero do vetor: \n", i+1);
            scanf("%d", &vet[i]);
        }

        printf("Vetor positivo: \n");
        for (int i=0; i<8; i++) {
            if (vet[i]>=0) {
                maiorzero[i] = vet[i];
                printf("%d\n", maiorzero[i]);
                x++;
            }
        }

        printf("Vetor negativo: \n");
        for (int i=0; i<8; i++) {
            if (vet[i]<0) {
                menorzero[i] = vet[i];
                printf("%d\n", menorzero[i]);
                y++;
            }
        }


        if (x==0 && y!=0) {
            printf("Só foram digitados números negativos\n");
        } else if (x!=0 && y==0) {
            printf("Só foram digitados números positivos\n");
        }


        return 0;
    }
 *
 * 04)  Elaborar um algoritmo que leia uma matriz 12x12 de números inteiros. Em seguida deve-se calcular e  imprimir a soma de todos  os elementos da coluna 4 da área hachurada (lembrando que  o índice inicia  com 0) e calcular o menor elemento da área hachurada da matriz abaixo:
 *
 *
 *int main() {
    int mat[12][12];
    srand(1);

    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            mat[i][j] = rand()%100;
        }
    }

    printf("Vetor: \n");
    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }

    printf("Área marcada (4): \n");
    for (int i=4; i<12; i++) {
        printf("%d\n", mat[i][4]);
    }

    return 0;
  }
 *
*05) Elaborar um algoritmo que leia uma matriz binária de  tamanho 5x5, isto é, nessa matriz somente  poderão ser armazenados os números 0  e 1  (deve  ser  feita  a  proteção  de  dados    no  código). Deve-se  calcular e imprimir:
     •A quantidade de números “1s” na Coluna 4 da matriz;
     • A quantidade de números “0s” na Linha 2 da matriz;
     • O percentual de números “0s” armazenados em toda a matriz;
     • O percentual de números “1s” armazenados em toda a matriz.
 *
 *int main () {
        int mat[5][5];
        int totalzero = 0, totalum = 0, um = 0, zero = 0;

        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                printf("Digite o número %d da %d coluna da matriz: \n"
                       "Obs.: os números só podem ser 0 ou 1\n", i+1, j+1);
                scanf("%d", &mat[i][j]);
                while (mat[i][j]!=0&&mat[i][j]!=1) {
                    printf("DIGITE 0 OU 1:\n");
                    scanf("%d", &mat[i][j]);
                }
                if (mat[i][j]==0) {
                    totalzero++;
                } else {
                    totalum++;
                }
            }
        }

        for (int i=0; i<5; i++) {
            if (mat[i][4] == 1) {
                um++;
            }
        }

        for (int i=0; i<5; i++) {
            if (mat[2][i] == 0) {
                zero++;
            }
        }

        if (um == 0) {
            printf("Não existem uns nessa coluna.\n");
        } else {
            printf("Total de uns na coluna 4: %d\n", um);
        }
        if (zero == 0) {
            printf("Não existem zeros nessa coluna.\n");
        } else {
            printf("Total de zeros na linha 2: %d\n", zero);
        }
        printf("Percentual de zeros: %.2f\n", (float)(totalzero*100)/25);
        printf("Percentual de uns: %.2f\n", (float)(totalum*100)/25);

        return 0;
    }

 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>