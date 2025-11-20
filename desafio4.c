/*Ler uma temperatura em graus Celsius e apresentá-la covertida em graus Fahrenheit.*/


#include <stdio.h>  // para saída de dados
#include <stdlib.h> 

int main(void) {
    float cel, fah; // variáveis em float
    
    printf("Digite a temperatura em graus Celsius:\n");
    scanf("%f", &cel);
    
    fah = (9 * cel / 5) + 32; // fórmula 
    
    printf("%f Celsius = %f Fahrenheit\n", cel, fah);
    
    return 0; // 0 para finalizar
