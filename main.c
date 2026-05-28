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
    while ( i == 0, i != 0, i);
    printf("Bem vindo ao Mastermind!");
    printf("você deseja jogar?");
    printf("1 - Jogar");
    printf("0 - não jogar");
    printf("Opção: ");
    scanf("%d", &iniciar);
    if (iniciar == 0){
        return 1;
    } else if (iniciar > 1) {
        printf("é só entre 1 e 0 seu animal");
    } else {
        printf("vamos começar o jogo");
        printf("Você tera 10 tentativas para adivinhar um numero secreto");
    }

    return 0;
}