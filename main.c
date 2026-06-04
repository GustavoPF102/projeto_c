#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTENTATIVAS 10

int main() {
    int iniciar;
    int chute[4];
    int j, a, temp;
    int i = 1;
    int numero_aleatorio[4];
    int L = 0;

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
        for(j = 0; j < 4; j++) {
            numero_aleatorio[j] = (rand() % 6) + 1;
            printf("%d\n", numero_aleatorio[j]);

  
        }

        printf("Vamos começar o jogo\n");
        printf("Você tera 10 tentativas para adivinhar um numero secreto\n");

        while (i < MAXTENTATIVAS){
            printf("qual teu chute? (são 4 numeros): ");
            for(L = 0; L < 4; L++){
            scanf("%d", &chute[L]);}
            if (chute[0] == numero_aleatorio[0] && chute[0] != numero_aleatorio[1, 2, 3]) {
                printf("o primeiro numero ta certo\n");
            else if
        }   else {
            printf("o primeiro numero ta errado\n");
        } 


            printf("tentativas já utulizadas: %d / %d\n", i, MAXTENTATIVAS);

            //verificar se ta igual

            i++;
        }


    }
    return 0;
}