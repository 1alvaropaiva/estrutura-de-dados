#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Carro {
    char modelo[20];
    char placa[8];
    int ano;
    int numeroVaga;
    struct Carro *Proximo;
} Carro;

void limparBuffer() {
    //função pra tirar \n após o fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

Carro *primeiro, *atual, *novoCarro;

void GetCarro() {
    novoCarro = (Carro*)malloc(sizeof(Carro));
    if (primeiro == NULL) {
        primeiro = atual = novoCarro;
    } else {
        atual = primeiro;
        while (atual->Proximo != NULL) {
            atual = atual -> Proximo;
        }
        atual -> Proximo = novoCarro;
    }

    printf("Digite o modelo: ");
    fgets(novoCarro->modelo, sizeof(novoCarro->modelo), stdin);
    printf("Digite a placa: ");
    fgets(novoCarro->placa, sizeof(novoCarro->placa), stdin);
    limparBuffer();
    printf("Digite o ano: ");
    scanf("%d", &novoCarro->ano);
    limparBuffer();
    printf("Digite o numero da vaga: ");
    scanf("%d", &novoCarro->numeroVaga);
    limparBuffer();
    novoCarro->Proximo = NULL;
}

void PrintCarro() {
    atual = primeiro;
    while (atual != NULL) {
        printf("Modelo: %s", atual->modelo);
        printf("Placa: %s\n", atual->placa);
        printf("No.Vaga: %d\n", atual->numeroVaga);
        printf("Ano: %d\n", atual->ano);
        puts("==============================");
        atual = atual->Proximo;
    }
}

void LiberarMemoria() {
    //função para liberar memória
    Carro *atual = primeiro;
    while (atual != NULL) {
        Carro *proximo = atual->Proximo;
        free(atual);
        atual = proximo;
    }
}

int main() {
    char ch;
    primeiro = (Carro *) NULL;

    do {
        GetCarro();
        puts("\ninserir outro carro (s/n)?");
        ch = getchar();
        limparBuffer();
    } while((ch != 'n') && (ch != 'N'));

    puts("LISTA DOS CARROS CADASTRADOS");
    puts("==============================");

    PrintCarro();
    LiberarMemoria();

    return 0;
}
