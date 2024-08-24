//
// Created by caiog on 23/08/2024.
//
// estruturas de decisão
#include <stdio.h>

void decisionStructures() {
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Voce eh crianca \n");
    } else if (idade >= 18 && idade < 60 ) {
        printf("Voce eh adulto \n");
    } else {
        printf("voce eh velho \n");
    }

    printf("Sua idade eh %d", idade);
}