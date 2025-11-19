/*Desenvolver um programa em C que eia dois valores numéricos inteiros. Operação de adição de dois valores e apresente o resultado obtido.*/

#include <stdio.h>

int main(void)
{
    int a, b, result;

    printf("Favor digitar o primeiro número: ");
    scanf("%d", &a);

    printf("Favor digitar o segundo número: ");
    scanf("%d", &b);

    result = a + b;

    printf("O resultado é: %d\n", result);

    return 0;
}
