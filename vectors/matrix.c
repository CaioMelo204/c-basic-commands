//
// Created by caiog on 23/08/2024.
// Matrizes
// array multidimensionais

#include <stdio.h>

void matrix() {
    // 3 nomes de até 50 caracteres
    char nome[3][50];

    for (int i = 0; i < 3; i++) {
        printf("Digite seu nome: \n");
        gets(nome[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("%s \t", nome[i]);
    }

    printf("\n");

    int mat[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat[i][j] = i + j;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
