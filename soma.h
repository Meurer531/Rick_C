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
    scanf("%d", &num1);a
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

void sorteio() {
    int soma = 0;
    int numero_sorteado;
    int contador = 0;

    printf("Iniciando o sorteio... 1-10, até 21 \n");

    while (soma <= 21) {

        numero_sorteado = (contador % 10) + 1;
        contador++;


        soma += numero_sorteado;


        printf("Numero sorteado: %d\n", numero_sorteado);
        printf("Soma atual: %d\n", soma);


        if (soma > 21) {
            printf("A soma total ultrapassou 21. Voce perdeu!\n");
            return;
        }


        char continuar;
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar == 'n' || continuar == 'N') {
            printf("Voce escolheu parar com a soma total de %d. Fim do jogo.\n", soma);
            return;
        }
    }
}

void sorteios()
{
    const char* mensagens[] = {
        "Você é mais forte do que pensa!",
        "Nunca desista dos seus sonhos!",
        "Acredite em si mesmo, o impossível é só uma questão de perspectiva.",
        "O sucesso é a soma de pequenos esforços repetidos dia após dia."
    };

    // Mensagem permanente
    const char* mensagemPermanente = "A vinganca nunca eh plena, mata a alma e envenena!";

    // Gerar número aleatório para escolher uma das 4 mensagens
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios
    int indice = rand() % 4;  // Gera um número entre 0 e 3

    
    printf("Mensagem sorteada: %s\n", mensagens[indice]);
    printf("Mensagem permanente: %s\n", mensagemPermanente);
}


#endif
