//
// Created by caiog on 23/08/2024.
// Repetition Structures
#include <stdio.h>

void repetition() {
    int numero, soma = 0;

    // com while
    // printf("Informe um numero: \n");
    // scanf("%d", &numero);
    // soma = soma + numero;
    // while (numero != 0) {
    //     printf("Informe um numero: \n");
    //     scanf("%d", &numero);
    //     soma = soma + numero;
    // }

    //com do while
    do {
        printf("Informe um numero: \n");
        scanf("%d", &numero);

        soma = soma + numero;
    } while (numero != 0);

    // usando For
    // printf("Informe um numero: \n");
    // scanf("%d", &numero);
    // // que ele some 4 vezes
    // for (int i = 0; i < 4 ; i++) {
    //     soma += numero;
    // }


    printf("Soma = %d\n", soma);
}

