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
    printf("O resultado da soma eh: %d\n", resultado);
}

void sub() {
    int num1, num2, resultado;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    resultado = num1 - num2;
    printf("O resultado da subtração eh: %d\n", resultado);
}

void divi() {
    int num1, num2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    if (num2 != 0) {
        float resultado = (float)num1 / num2;
        printf("O resultado da divisão eh: %.2f\n", resultado);
    } else {
        printf("Divisão por zero não eh permitida.\n");
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
    printf("O fatorial de %d eh: %lld\n", num1, resultado);
}

void fibo()
{
     int a, atual= 1, anterior = 0, prox;
    do{
        printf("Insira qtd desejada");
        scanf("%d",&a);

    }while ( !(a >= 2));

    printf("\n0 1");

    for ( int i = 3; i <= a; i++) //atual, anterior, prox
    {
        prox = atual + anterior;
        printf(" %d",prox);
        anterior = atual;
        atual = prox;
    }
}



#endif
