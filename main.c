#include <stdio.h>
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
    int iniciar, i;
    printf("\nBem vindo ao Mastermind!");
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
    } else {
        printf("Vamos começar o jogo\n");
        printf("Você tera 10 tentativas para adivinhar um numero secreto\n");
    }

    return 0;
}