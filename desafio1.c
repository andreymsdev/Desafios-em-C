#include <stdio.h>

int main(void) {
    int a, b, resultado;
    char op;

    // TODO: peça ao usuário o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    // TODO: peça ao usuário o segundo número
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // TODO: peça ao usuário a operação (+ - * /)
    printf("Digite a operação (+ - * /): ");
    scanf(" %c", &op);

    // TODO: use switch para calcular
    switch(op) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case '*':
            resultado = a * b;
            break;
        case '/':
            resultado = a / b;
            break;
        default:
            printf("Operação inválida!\n");
            return 1;
    }

    // TODO: imprima o resultado
    printf("Resultado: %d\n", resultado);

    return 0;
