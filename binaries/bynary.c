//
// Created by caiog on 23/08/2024.
// Bynary

#include <stdio.h>

void bynary() {
    // numeros binarios
    // operações em binario só são possiveis em int, char, long int;
    // operções possiveis
    // (~) NOT
    // >> Deslocamento de bits para direita
    // << Deslocamento de bits para esquerda

    int i = 2;
    printf("%d\n", i);
    i = i << 1;
    printf("%d\n", i);
    i = i >> 1;
    printf("%d\n", i);
    i = ~i;
    printf("%d\n", i);
}
