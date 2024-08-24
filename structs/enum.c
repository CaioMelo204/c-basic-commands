//
// Created by caiog on 24/08/2024.
// Enum

#include <stdio.h>
// enum -> enumeracao

enum dias_da_semana {
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};

void enumeracao() {
    enum dias_da_semana d1, d2;

    d1 = segunda;
    d2 = 2;

    printf("d1 = %d\n", d1);
    printf("d2 = %d\n", d2);
}