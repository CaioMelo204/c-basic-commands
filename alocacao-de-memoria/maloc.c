//
// Created by caiog on 24/08/2024.
// Maloc
#include <stdio.h>
#include <stdlib.h>

void useMalloc() {
    int qtd, *p;

    printf("Enter the number of queries: ");
    scanf("%d", &qtd);

    p = (int*)malloc(qtd * sizeof(int));

    if (p) {
        for (int i = 0; i < qtd; i++) {
            printf("Enter number %d: \n", i + 1);
            scanf("%d", &p[i]);
        }

        for (int i = 0; i < qtd; i++) {
            printf("vetor na posicao p[%d] = %d \n ", i, p[i]);
        }

        printf("a variavel p ocupa %d bytes em memoria \n", sizeof(p));
    } else {
        printf("Erro: Memoria insuficiente \n");
    }

    // liberar a memoria
    free(p);
    p = NULL; //medida de segurança
}