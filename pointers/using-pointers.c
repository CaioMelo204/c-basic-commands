//
// Created by caiog on 23/08/2024.
// Usando ponteiros
#include <stdio.h>

void usingPointers() {
    int numero;
    int* p;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    p = &numero;

    printf("O numero digitado foi: %d\n", numero);
    printf("O endereco de memoria: %p \n", p);
}