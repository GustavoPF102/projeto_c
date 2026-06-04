#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTENTATIVAS 10

int main() {
    int iniciar;
    int chute[4];
    int j, k;
    int i = 0;
    int numero_aleatorio[4];
    int L = 0;
    int conttentativas = 0;

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
            printf("Qual teu chute de 4 numeros? (De forma a ficar: X X X X): ");
            for(L = 0; L < 4; L++){
            scanf("%d", &chute[L]);}
            if (chute[0] == numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                printf("o primeiro numero ta certo\n");
        }   else {
            printf("o primeiro numero ta errado\n");
        } 
        conttentativas++;

            printf("tentativas já utilizadas: %d / %d\n", conttentativas, MAXTENTATIVAS);

            //verificar se ta igual

            i++;
        }


    
    return 0;
}
}