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
-----------------------------------------------------------------------------------------------------------------------
04)
#include <stdio.h>
#include <string.h>

typedef struct {
    char matricula[10];
    char nome[100];
    float nota1, nota2, nota3;
}Alunos;

int main() {
    Alunos aluno[3];
    float maiorNota = 0, maiorMedia = 0, menorMedia = 20;
    int maiorMediaAluno=0, menorMediaAluno=0, maiorNotaAluno=0;
    for (int i=0; i<3; i++) {
        printf("Aluno %d\n", i+1);
        printf("Nome: ");
        fgets(aluno[i].nome, 100, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';
        printf("Matricula: ");
        fgets(aluno[i].matricula, 10, stdin);
        aluno[i].matricula[strcspn(aluno[i].matricula, "\n")] = '\0';
        printf("Nota 1: ");
        scanf("%f", &aluno[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &aluno[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &aluno[i].nota3);
        while (getchar() != '\n');
    }
    for (int i=0; i<3; i++) {
        double media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3.0;
        if (media>=6) {
            printf("Aluno %d APROVADO\n", i+1);
        } else {
            printf("Aluno %d REPROVADO\n", i+1);
        }
        if (media>=maiorMedia) {
            maiorMediaAluno = i+1;
            maiorMedia=media;
        }
        if (media<=menorMedia) {
            menorMediaAluno = i+1;
            menorMedia=media;
        }
        if (aluno[i].nota1>=maiorNota) {
            maiorNotaAluno = i+1;
            maiorNota=aluno[i].nota1;
        }
    }
    printf("maior nota primeira prova: aluno %d\n", maiorNotaAluno);
    printf("maior media: aluno %d\n", maiorMediaAluno);
    printf("menor media: aluno %d\n", menorMediaAluno);

    return 0;
}
-----------------------------------------------------------------------------------------------------------------------
06)
#include <stdio.h>
#include <string.h>

typedef struct {
    char matricula[10], nome[100];
    long codigoDisciplina;
    float nota1, nota2;
    float media;
}Alunos;

int main () {
    Alunos aluno[2];
    printf("");

    for (int i=0; i<2; i++) {
        printf("Nome do aluno %d: ", i+1);
        fgets(aluno[i].nome, 100, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';
        printf("Matricula do aluno %d: ", i+1);
        fgets(aluno[i].matricula, 100, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';
        printf("Código da disciplina: ");
        scanf("%li", &aluno[i].codigoDisciplina);
        printf("Nota 1: ");
        scanf("%f", &aluno[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &aluno[i].nota2);
        while (getchar() != '\n');
    }

    for (int i=0; i<2; i++) {
        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2) /2;
        printf("Aluno %s\n", aluno[i].nome);
        printf("Media: %.2f\n", aluno[i].media);
    }

    return 0;
}
*/