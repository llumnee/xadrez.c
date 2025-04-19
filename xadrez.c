#include <stdio.h>

// A Torre anda em linha reta, tanto na horizontal quanto na vertical.
// O Bispo só anda na diagonal.
// A Rainha anda tanto na horizontal, vertical e diagonal.
// O Cavalo anda em L, ou seja, duas casas em uma direção e uma casa em outra direção.

int main () {

    int torre, bispo, rainha, cavalov, cavaloh; // variáveis para as peças

        torre = 1;
        bispo = 1;
        rainha = 1;
        cavalov = 1;
        cavaloh = 1;

// A torre andará 5 casas na vertical para cima.

    while (torre <= 5) //condição de repetição

    {
        
        printf("A Torre andou uma casa na vertical para cima.\n");

        torre++;

    }

    printf("\n");
    
// O Bispo andará 5 casas na diagonal para cima e à direita.

    do {

        printf("O Bispo andou uma casa para cima e à direita.\n");

        bispo++;
        
    } while (bispo <= 5); 

    printf("\n");

// A Rainha andará 8 casas para a esquerda.

    for (rainha = 1; rainha <= 8; rainha++) // inicialização, condição e incremento
    {
        
        printf("A Rainha andou uma casa para esquerda.\n");

    }

    printf("\n");

// O Cavalo andará duas casas para baixo e uma casa para a esquerda
    
    while (cavaloh <= 1){

        for (cavalov = 1; cavalov <= 2; cavalov++) {

            printf("O Cavalo andou uma casa para baixo.\n");

        }
        
        printf("O Cavalo andou uma casa para a esquerda.\n");

        cavaloh++;

    }
    
    return 0; 

}
