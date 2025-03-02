/*
01)
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int horario[3];
    int data[3];
    char compromisso[100];
}Tipodados;

int main () {
    Tipodados teste;
    printf("Digite o dia, mes e ano do compromisso: \n");
    scanf("%d %d %d", &teste.data[0], &teste.data[1], &teste.data[2]);
    printf("Digite a hora, os minutos e segundos do compromisso: \n");
    scanf("%d %d %d", &teste.horario[0], &teste.horario[1], &teste.horario[2]);
    while (getchar() != '\n');
    printf("Compromisso: \n");
    fgets(teste.compromisso, 100, stdin);

    printf("Informações do compromisso: \n");
    printf("Data: %d / %d / %d\n", teste.data[0], teste.data[1], teste.data[2]);
    printf("Horario: %d : %d : %d\n", teste.horario[0], teste.horario[1], teste.horario[2]);
    printf("Compromisso: %s", teste.compromisso);

    return 0;
}
 -----------------------------------------------------------------------------------------------------------------------
02)
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char nome[100];
    int idade;
    char endereco[100];
}Cadastro;

int main() {
    Cadastro aluno;
    printf("Nome: \n");
    fgets(aluno.nome, 100, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';
    printf("Idade: \n");
    scanf("%d", &aluno.idade);
    while (getchar() != '\n');
    printf("Endereço: \n");
    fgets(aluno.endereco, 100, stdin);
    printf("Nome: %s\nIdade: %d\nEndereço: %s", aluno.nome, aluno.idade, aluno.endereco);
}
 -----------------------------------------------------------------------------------------------------------------------
03)
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    char matricula[100];
    char curso[100];
}Aluno;

int main () {
    Aluno alunos[5];

    for (int i=0; i<5; i++) {
        printf("Aluno %d\n", i+1);
        printf("Digite o nome: \n");
        fgets(alunos[i].nome, 100, stdin);
        printf("Digite a matricula: \n");
        fgets(alunos[i].matricula, 100, stdin);
        printf("Digite o curso: \n");
        fgets(alunos[i].curso, 100, stdin);
    }

    for (int i=0; i<5; i++) {
        printf("Aluno: %d\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %s\n", alunos[i].matricula);
        printf("Matricula: %s\n", alunos[i].curso);
    }

    return 0;
}
*/