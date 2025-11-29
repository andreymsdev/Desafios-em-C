#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// lembretes: \ {} printf scanf // funções uteis: rand(), malloc ()

int main() {
    int numero, chute, tentativa = 0;

    // inicializa 
    srand(time(NULL));
    numero = rand() % 100 + 1;

    do {
        printf("Qual seu chute? ");
        scanf("%d", &chute);
        tentativa++;

        if (chute > numero) {
            printf("Chutou alto. Tenta de novo.\n");
        } else if (chute < numero) {
            printf("Chutou baixo. Tenta de novo.\n");
        } else {
            printf("Parabéns! Você acertou em %d tentativas.\n", tentativa);
        }
    } while (chute != numero);

    return 0; 
