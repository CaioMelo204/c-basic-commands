//
// Created by caiog on 23/08/2024.
// dataTypes

#include <stdio.h>

void dataTypes() {
    // Inteiros
    int integer = 204;
    printf("%d \n", integer);

    // Reais
    float decimal = 3.14159;
    double decimalDouble = 3.14159; // float x2
    printf("%f  \n", decimal);
    printf("%lf \n", decimalDouble);

    // Alfanumericos char
    char character = 'A';
    printf("%c  \n", character);

    // na linguagem c não existe string
    // usase o array
    char greetings[] = "   sandino     ";
    printf("%s  \n", greetings);

    // Gets inseguro
    char name[50];
    printf("Enter your name: \n");
    gets(name);
    printf("%s \n", name);

    // Booleanos
    // em C nao existe booleanos
    // em C (0) é false e qualquer outro inteiro é true

    int boolean;

    scanf("%d", &boolean);

    if (boolean) {
        printf("eh true");
    } else {
        printf("eh false");
    }
}
