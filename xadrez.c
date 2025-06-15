#include <stdio.h>

// Constantes para os limites de movimento
#define MOVINTO_ BISPO 5
#define MOVIMENTO_TORRE 5
#define_MOVIMENTO_RAINHA 8

int main(){
    // Variáveis para armazenar as direções de movimentação
    int i;

    //Movimentação do Bispo na diagonal superior direita
    printf("Movimentado o Bispo na diagonal superior direita:\n");
    for (i =1; i <= MOVIMENTO_BISPO; i++) {
        printf("passo %d: Cima e Direita\n",i);

    }
    printf("\n");

    // Movimentação da torre para a direita
    printf("Movimentando a Torre para a Direita:\n");
    for (i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf ("Passo %d: Direita\n", i);
    }
    printf("\n");

    // Movimentação da Rainha para a esquerda
    printf("Movimentado a Rainha para a esquerda:\n");
    for (i = 1; i <= MOVIMENTO_RAINHA; I++) {
        printf("Passo %d: Esquerda\n", i);
    }
    printf("\n");

    // Exemplo de movimentação do Bispo na diagonal superior esquerda usando uma estrutura de repetição diferente
    printf("Movimentado o Bispo na diagonal superior esquerda:\n");
    for (i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("Passo %d: Cima e Esquerda\n", i);
    }
    printf("n");

    return 0;
}
