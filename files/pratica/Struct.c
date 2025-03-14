/*

-> Struct em C.
-> Mais informações no readme.md

#include <stdio.h>
#include <string.h>

typedef struct {
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

int main () {
    Pessoa cliente1;

    printf("Digite seu nome: \n");
    scanf("%s", &cliente1.nome);
    printf("Digite seu sexo (m ou f): \n");
    scanf("%s", &cliente1.sexo);
    printf("Digite sua idade: \n");
    scanf("%d", &cliente1.idade);


    printf("Nome: %s\nIdade: %d\nSexo: %c\n", cliente1.nome, cliente1.idade, cliente1.sexo);
    return 0;
}

                          -----------------------------------------

#include <stdio.h>
#include <string.h>

typedef struct {
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

int main () {
    Pessoa cliente1;

    printf("Digite seu nome: \n");
    fgets(cliente1.nome, 100, stdin);
    cliente1.nome[strcspn(cliente1.nome, "\n")] = '\0'; // <-- esse comando remove o caractere \n que o fgets inclui
    printf("Digite seu sexo (m ou f): \n");
    scanf("%c", &cliente1.sexo);
    printf("Digite sua idade: \n");
    scanf("%d", &cliente1.idade);


    printf("Nome: %s\nIdade: %d\nSexo: %c\n", cliente1.nome, cliente1.idade, cliente1.sexo);
    return 0;
}


 */