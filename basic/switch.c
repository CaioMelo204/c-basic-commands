//Switch
#include <stdio.h>

void switchDecision () {
    int valor;

    printf("Digite um valor entre 1 e 3: \n");
    scanf("%d", &valor);

    switch (valor) {
        case 1:
            printf("escolheu o numero 1 \n");
        break;
        case 2:
            printf("escolheu o numero 2 \n");
        break;
        case 3:
            printf("escolheu o numero 3 \n");
        break;
        default:
            printf("Valor invalido\n");
    }
}