//
// Created by caiog on 24/08/2024.
// Structs

#include <ctype.h>
#include <stdio.h>
#include <string.h>


// Estrutura
struct st_aluno {
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nasc;
}aluno1; // pode ser declarado direto na estrutura os dados.

// Strutura contendo uma estrutura
struct classe {
    struct st_aluno aluno[100];
};

void structs() {
    struct st_aluno aluno;
    // pode ser colocado em array
    struct st_aluno alunos[5];

    printf("Digite a matricula: \n");
    fgets(aluno.matricula, 10, stdin);

    printf("Digite a nome: \n");
    fgets(aluno.nome, 100, stdin);

    printf("Digite a curso: \n");
    fgets(aluno.curso, 50, stdin);

    printf("Digite a ano nascimento dele: \n");
    scanf("%d", &aluno.ano_nasc);

    printf("========================== dados do aluno =========================== \n");

    printf("\nMatricula: %s", aluno.matricula);
    printf("\nNome: %s", aluno.nome);
    printf("\nCurso: %s", aluno.curso);
    printf("\nAno nascimento: %d", aluno.ano_nasc);
}