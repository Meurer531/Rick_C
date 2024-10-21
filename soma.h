#ifndef SOMA_H
#define SOMA_H


#include <stdio.h>
#include "soma.h"

void soma() {
    int num1, num2, resultado;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("O resultado da soma é: %d\n", resultado);
}

void sub() {
    int num1, num2, resultado;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    resultado = num1 - num2;
    printf("O resultado da subtração é: %d\n", resultado);
}

void divi() {
    int num1, num2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    if (num2 != 0) {
        float resultado = (float)num1 / num2;
        printf("O resultado da divisão é: %.2f\n", resultado);
    } else {
        printf("Divisão por zero não é permitida.\n");
    }
}

void fat() {
    int num1;
    long long resultado = 1;
    printf("Digite o numero para calcular o fatorial: \n");
    scanf("%d", &num1);
    if (num1 < 0) {
        printf("Fatorial não aceita números negativos.\n");
        return;
    }
    for (int i = 1; i <= num1; i++) {
        resultado *= i;
    }
    printf("O fatorial de %d é: %lld\n", num1, resultado);
}

#endif
