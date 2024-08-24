//
// Created by caiog on 23/08/2024.
// Array unidimensional
#include <ctype.h>
#include <stdio.h>

void vectors() {
    //vetores e strings
    char nome[50];
    printf("Digite seu nome: \n");
    gets(nome);
    printf("Nome: %s \n", nome);

    //vetores e caracteres
    char letras[50];
    for (int i = 0; i < 50; i++) {
        letras[i] = toupper(nome[i]);
    }
    printf("Letras: %s \n", letras);
    //inteiros
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        numeros[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d \n", numeros[i]);
    }

    //reais
    float valores[5];
    for (int i = 0; i < 5; i++) {
        valores[i] = (float)numeros[i] / 2;
    }
    for (int i = 0; i < 5; i++) {
        printf("%f \n", valores[i]);
    }
}
