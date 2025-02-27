/*
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct {
    char nome[100];
    int idade;
    char cep[8];
    char cpf[11];
    _Bool estaCadastrado;
}Cliente;


int main () {
    char select;
    int totalalunos;
    printf("Cadastro Clientes\n");
    printf("Digite a quantidade de alunos: \n");
    scanf("%d", &totalalunos);

    Cliente aluno[totalalunos];

    for (int i=0; i<totalalunos; i++) {
        printf("Digite seu nome: \n");
        scanf("%s", &aluno[i].nome);
        printf("Digite sua idade: \n");
        scanf("%d", &aluno[i].idade);
        printf("Digite seu cep: \n");
        scanf("%s", &aluno[i].cep);
        printf("Digite seu cpf: \n");
        scanf("%s", &aluno[i].cpf);
        aluno[i].estaCadastrado = true;
    }

    printf("Deseja informações de todos alunos ou apenas algum especifico?\n(T para todos)\n(E para especificos):\n");
    scanf("%c");
    scanf("%c", &select);
    select = toupper(select);
    while (select!='T'&&select!='E') {
        scanf("%c");
        printf("Digite corretamente: \n");
        scanf("%c", &select);
        select = toupper(select);
    }

    if (select=='T') {
        for (int i=0; i<totalalunos; i++) {
            printf("Informações do aluno %d:\n", i + 1);
            printf("Nome: %s\n", aluno[i].nome);
            printf("Idade: %d\n", aluno[i].idade);
            printf("Cep: %s\n", aluno[i].cep);
            printf("Cpf: %s\n", aluno[i].cpf);
            printf("Está cadastrado.\n");
        }
    } else {
        int escolhaaluno;
        printf("Digite o numero do aluno que deseja: \n");
        scanf("%d", &escolhaaluno);
        while (escolhaaluno>totalalunos||escolhaaluno<=0) {
            printf("Erro! Digite corretamente:\n");
            scanf("%d", &escolhaaluno);
        }
        escolhaaluno--;
        printf("Informações do aluno %d:\n", escolhaaluno);
        printf("Nome: %s\n", aluno[escolhaaluno].nome);
        printf("Idade: %d\n", aluno[escolhaaluno].idade);
        printf("Cep: %s\n", aluno[escolhaaluno].cep);
        printf("Cpf: %s\n", aluno[escolhaaluno].cpf);
        printf("Está cadastrado.\n");
    }

    return 0;
}
*/

