//
// Created by caiog on 24/08/2024.
// Calloc
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void useCalloc() {
    int qtd, *p;

    printf("Enter the number of queries: ");
    scanf("%d", &qtd);

    // aloca e transforma e zera o espaço em memoria
    p = (int*)calloc(qtd ,sizeof(int));

    for (int i = 0; i < qtd; i++) {
        printf("Enter number %d: \n", i + 1);
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < qtd; i++) {
        printf("vetor na posicao p[%d] = %d \n ", i, p[i]);
    }

    printf("a variavel p ocupa %d bytes em memoria \n", p);

    // liberar a memoria
    free(p);
    p = NULL; //medida de segurança
}