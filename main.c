#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTENTATIVAS 10

int continuar()
{
    int continua;
    printf("deseja continuar jogando?");
    printf("1 - Continuar a jogar");
    printf("0 - não continuar a jogar");
    printf("Opção: ");
    scanf("%d", &continua);
    if (continua == 0){
        return 1;
    } else if (continua > 1) {
        printf("é só entre 1 e 0 seu animal");
    } else {
        printf("vamos continuar o jogo");
}
}


int main() {
    int iniciar;
    int tentrest = 10;
    int chute[4];
    int rng[4];
    int i, j;
    printf("\nBem vindo ao Mastermind de baixo orçamento!");
    printf("\nvocê deseja jogar?");
    printf("\n1 - Jogar");
    printf("\n0 - não jogar");
    printf("\nOpção: ");
    scanf("%d", &iniciar);

    

    if (iniciar == 0){
        printf("o jogo acabou porra\n");
        return 1;
    } else if (iniciar > 1) {
        printf("é só entre 1 e 0 seu animal\n");
        return 1;
    } else {
        srand(time(NULL));
        for(j = 0; j > 3; j++); {
            int numero_aleatorio = rand() % 3;
            printf("%d", numero_aleatorio);
            scanf("%d",&rng[j]);
    }
        
        printf("Vamos começar o jogo\n");
        printf("Você tera 10 tentativas para adivinhar um numero secreto\n");
        
        while(i < 4);{
            printf("qual teu chute?: ");
            scanf("%d", &chute[1]);    
            i++;
       }

    }
    return 0;
}