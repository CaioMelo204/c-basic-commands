//
// Created by caiog on 23/08/2024.
//
#include <stdio.h>

void arrayVectors() {
    int valores[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", valores[i]);
        printf("%d\n", *(valores+i));
        printf("%p\n", &valores[i]);
        printf("%ld \n", sizeof(valores[i]));
    }
}