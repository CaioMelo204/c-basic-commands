//
// Created by caiog on 23/08/2024.
// Operações matematicas

#include <stdio.h>

void operations() {
    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    int res = valor1 + valor2;
    printf("a soma eh: %d \n", res);

    res = valor1 - valor2;
    printf("a subtracao eh: %d \n", res);

    res = valor1 * valor2;
    printf("a multiplicacao eh: %d \n", res);

    // casting
    float resposta = (float)valor1 / (float)valor2;
    printf("a divisao eh: %f \n", resposta);

    res = valor1 % valor2;
    printf("a modulo eh: %d \n", res);
}