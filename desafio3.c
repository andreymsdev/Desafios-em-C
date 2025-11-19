#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int i, j;
    char temp;

    // TODO: peça ao usuário uma string
    printf("Digite uma palavra ou frase: ");
    scanf("%99s", str); // lê até 99 caracteres sem espaços

    // TODO: inverta a string
    int len = strlen(str);
    for(i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // TODO: imprima a string invertida
    printf("Invertida: %s\n", str);

    return 0;
}
