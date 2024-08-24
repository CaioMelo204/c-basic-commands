//
// Created by caiog on 24/08/2024.
//

#include <stdio.h>

void alias () {
    // serve para criar um alias
    typedef float nota;

    //declarando variaveis

    nota valor1;
    nota valor2;

    printf("Digite a nota que deseja calcular : ");
    scanf("%f", &valor1);

    printf("Digite a nota que deseja calcular : ");
    scanf("%f", &valor2);
}
