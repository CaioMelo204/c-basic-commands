//
// Created by caiog on 23/08/2024.
//
// Aula sobre Variaveis
#include <stdio.h>

int variables() { // bloco de codigo (inicio)
    // declarando variaveis
    int idade; //inteiro

    // declarando e inicializando
    //int idade = 0

    // funcao para escrever algo na saida padrao
    printf("Qual a sua Idade? \n"); // ponto e virgula finaliza um comando


    // Receber dados
    scanf("%d", &idade);

    printf("A sua idade é %d", idade);
    return 0;
} // (fim do bloco)