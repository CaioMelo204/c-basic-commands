#include <ctype.h>
#include <stdio.h>
#include <string.h>
//union

//
// Created by caiog on 24/08/2024.
// Union
#include <stdio.h>
#include <string.h>

// a union utiliza apenas o espaço da maior variavel
// Sobreescreve o espaço
union pessoa {
    char name[50];
    int age;
};

union numeros {
    int num1, num2, num3;
};

void uniao() {
    union pessoa pes;

    strcpy(pes.name, "John");
    printf("nome %s", pes.name);
    pes.age = 18;
    printf("pessoa %d", pes.age);

    union numeros n;

    printf("A variavel pes esta ocupando %ld bytes em memoria \n", sizeof(pes));

    n.num1 = 18;
    n.num2 = 17;
    n.num3 = 16;

    // sobreescreve
    printf("pessoa %d \n", n.num1);
    printf("pessoa %d \n", n.num2);
    printf("pessoa %d \n", n.num3);
}