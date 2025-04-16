#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct aviao
typedef struct Aviao {
    char nome[50];
    char identificador[10];
    char origem[50];
    char destino[50];
    char modelo[30];
    int capacidade;
    int passageiros;
    struct Aviao *proximo;
} Aviao;

// struct pra representar a fila de decolagem
typedef struct FilaDecolagem {
    Aviao *inicio;
    Aviao *fim;
    int tamanho;
} FilaDecolagem;

// funçao pra limpar o buffer
void limparBuffer() {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

// funçao pra iniciar a fila
void inicializarFila(FilaDecolagem *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->tamanho = 0;
}

// função pra adicionar avião
void adicionarAviao(FilaDecolagem *fila) {
    Aviao *novo = (Aviao*)malloc(sizeof(Aviao));
    if(novo == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    printf("\n--- Adicionar Avião ---\n");
    printf("Nome: ");
    fgets(novo->nome, 50, stdin);
    novo->nome[strcspn(novo->nome, "\n")] = '\0';

    printf("Identificador: ");
    fgets(novo->identificador, 10, stdin);
    novo->identificador[strcspn(novo->identificador, "\n")] = '\0';

    printf("Origem: ");
    fgets(novo->origem, 50, stdin);
    novo->origem[strcspn(novo->origem, "\n")] = '\0';

    printf("Destino: ");
    fgets(novo->destino, 50, stdin);
    novo->destino[strcspn(novo->destino, "\n")] = '\0';

    printf("Modelo: ");
    fgets(novo->modelo, 30, stdin);
    novo->modelo[strcspn(novo->modelo, "\n")] = '\0';

    printf("Capacidade: ");
    scanf("%d", &novo->capacidade);

    printf("Número de passageiros: ");
    scanf("%d", &novo->passageiros);
    limparBuffer();

    novo->proximo = NULL;

    if(fila->fim == NULL) {
        fila->inicio = novo;
        fila->fim = novo;
    } else {
        fila->fim->proximo = novo;
        fila->fim = novo;
    }
    fila->tamanho++;

    printf("\nAvião %s (%s) adicionado à fila de decolagem.\n", novo->nome, novo->identificador);
}

// função pra autorizar decolagem
void autorizarDecolagem(FilaDecolagem *fila) {
    if(fila->inicio == NULL) {
        printf("\nNenhum avião na fila de decolagem.\n");
        return;
    }

    Aviao *temp = fila->inicio;
    printf("\n--- AUTORIZAÇÃO DE DECOLAGEM ---\n");
    printf("Avião: %s (%s)\n", temp->nome, temp->identificador);
    printf("Modelo: %s\n", temp->modelo);
    printf("Origem: %s | Destino: %s\n", temp->origem, temp->destino);
    printf("Capacidade: %d | Passageiros: %d\n", temp->capacidade, temp->passageiros);
    printf("\nDecolagem autorizada!\n");

    fila->inicio = fila->inicio->proximo;
    if(fila->inicio == NULL) {
        fila->fim = NULL;
    }
    fila->tamanho--;
    free(temp);
}

// função pra listar quantidade de avioes
void listarNumeroAvioes(FilaDecolagem *fila) {
    printf("\nNúmero de aviões na fila de decolagem: %d\n", fila->tamanho);
}

// função pra listar avioes
void listarTodosAvioes(FilaDecolagem *fila) {
    if(fila->inicio == NULL) {
        printf("\nNenhum avião na fila de decolagem.\n");
        return;
    }

    printf("\n--- TODOS OS AVIÕES NA FILA ---\n");
    Aviao *atual = fila->inicio;
    int posicao = 1;

    while(atual != NULL) {
        printf("\nPosição %d:\n", posicao++);
        printf("Nome: %s\n", atual->nome);
        printf("Identificador: %s\n", atual->identificador);
        printf("Modelo: %s\n", atual->modelo);
        printf("Origem: %s | Destino: %s\n", atual->origem, atual->destino);
        printf("Capacidade: %d | Passageiros: %d\n", atual->capacidade, atual->passageiros);
        atual = atual->proximo;
    }
}

// função pra listar o primeiro aviao
void listarPrimeiroAviao(FilaDecolagem *fila) {
    if(fila->inicio == NULL) {
        printf("\nNenhum avião na fila de decolagem.\n");
        return;
    }

    Aviao *primeiro = fila->inicio;
    printf("\n--- PRIMEIRO AVIÃO NA FILA ---\n");
    printf("Nome: %s\n", primeiro->nome);
    printf("Identificador: %s\n", primeiro->identificador);
    printf("Modelo: %s\n", primeiro->modelo);
    printf("Origem: %s | Destino: %s\n", primeiro->origem, primeiro->destino);
    printf("Capacidade: %d | Passageiros: %d\n", primeiro->capacidade, primeiro->passageiros);
}

int main() {
    FilaDecolagem fila;
    inicializarFila(&fila);
    int opcao;

    do {
        printf("\n=== CONTROLE DE DECOLAGEM ===\n");
        printf("1. Adicionar avião à fila de decolagem\n");
        printf("2. Autorizar decolagem do primeiro avião\n");
        printf("3. Listar número de aviões na fila\n");
        printf("4. Listar todos os aviões na fila\n");
        printf("5. Mostrar características do primeiro avião\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        limparBuffer();

        switch(opcao) {
            case 1:
                adicionarAviao(&fila);
                break;
            case 2:
                autorizarDecolagem(&fila);
                break;
            case 3:
                listarNumeroAvioes(&fila);
                break;
            case 4:
                listarTodosAvioes(&fila);
                break;
            case 5:
                listarPrimeiroAviao(&fila);
                break;
            case 0:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 0);

    // Liberar memória alocada para os aviões
    while(fila.inicio != NULL) {
        Aviao *temp = fila.inicio;
        fila.inicio = fila.inicio->proximo;
        free(temp);
    }

    return 0;
}

