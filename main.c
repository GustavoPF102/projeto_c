#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int iniciar;
    int chute[4];
    int j;
    int i = 0;
    int numero_aleatorio[4];
    
    printf("\nBem vindo ao Mastermind de baixo orçamento!");
    printf("\nvocê deseja jogar?");
    printf("\n1 - Jogar");
    printf("\n0 - não jogar\n");
    printf("Opção: ");
    scanf("%d", &iniciar);

    if (iniciar == 0){
        printf("o jogo acabou porra\n");
        return 1;
    } else if (iniciar > 1) {
        printf("é só entre 1 e 0 seu animal\n");
        return 1;
    }  
    else {
        srand(time(NULL));
        for(j = 0; j > 4; j++); {
            numero_aleatorio[j] = rand() % 10;
            printf("n: %d\n", numero_aleatorio[j]);
        }

        printf("Vamos começar o jogo\n");
        printf("Você tera 10 tentativas para adivinhar um numero secreto\n");

        while (i < 4){
            printf("qual teu chute? (são 4 numeros): ");
            scanf("%d", &chute[i]);

            //verificar se ta igual

            i++;
        }

        printf("%d\n", numero_aleatorio[0]);
        printf("%d\n", numero_aleatorio[1]);
        printf("%d\n", numero_aleatorio[2]);
        printf("%d\n", numero_aleatorio[3]);
    }
    return 0;
}