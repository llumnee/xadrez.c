#include <stdio.h>

// A Torre anda em linha reta, tanto na horizontal quanto na vertical.
// O Bispo só anda na diagonal.
// A Rainha anda tanto na horizontal, vertical e diagonal.

int main () {

    int torre, bispo, rainha; // variáveis para as peças

        torre = 1;
        bispo = 1;
        rainha = 1;

// A torre andará 5 casas na vertical para cima.

    while (torre <= 5) //condição de repetição

    {
        
        printf("A Torre andou uma casa para a vertical para cima.\n");

        torre++;

    }

// O Bispo andará 5 casas na diagonal para a direita.

    do {

        printf("O Bispo andou uma casa para a diagonal direita.\n");

        bispo++;
        
    } while (bispo <= 5); 

// A Rainha andará 8 casas na horizonta l para a esquerda.

    for (rainha = 1; rainha <= 8; rainha++) // inicialização, condição e incremento
    {
        
        printf("A Rainha andou uma casa para a horizontal esquerda.\n");

    }

    return 0; 

}
