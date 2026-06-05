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
    int verificavitoria = 0;

    printf("\nBem vindo ao Mastermind de baixo orçamento!");
    printf("\nvocê deseja jogar?");
    printf("\n1 - Jogar");
    printf("\n0 - Não jogar\n");
    printf("Opção: ");
    scanf("%d", &iniciar);

    if (iniciar == 0){
        printf("O jogo acabou medroso \n");
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
        printf("Você tera 10 tentativas para adivinhar um código secreto\n");
        printf("--------");
        printf("Regras:");
        printf("O código tem 4 digitos que vão de 1 a 6");
        printf("Os números não se repetem no código");
        printf("Siga a maneira que o jogo ensina para dar seu palpite");
        printf("Se divirta");
        printf("--------");

        while (i < MAXTENTATIVAS){
            printf("Qual teu chute de 4 numeros? (De forma a ficar: X X X X): ");
            for(L = 0; L < 4; L++){
            scanf("%d", &chute[L]);}
            if (chute[L] != 4){
                printf("\ne pra introduzir 4 numeros anta\n");
        }
            if (chute[0] == numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                printf("o primeiro numero ta certo e no lugar certo\n");
                verificavitoria++;
        }   else if (chute[0] != numero_aleatorio[0] && chute[0] == numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                printf("o primeiro numero ta certo mas no lugar errado\n");
        }   else if (chute[0] != numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] == numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                printf("o primeiro numero ta certo mas no lugar errado\n");
        }   else if (chute[0] != numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] == numero_aleatorio[3]) {
                printf("o primeiro numero ta certo mas no lugar errado\n");
        }   else {
            printf("o primeiro numero ta errado\n");
            verificavitoria = 0;
        } 
            if (chute[1] != numero_aleatorio[0] && chute[1] == numero_aleatorio[1] && chute[1] != numero_aleatorio[2] && chute[1] != numero_aleatorio[3]) {
                printf("o segundo numero ta certo e no lugar certo\n");
                verificavitoria++;
        }   else if (chute[1] == numero_aleatorio[0] && chute[1] != numero_aleatorio[1] && chute[1] != numero_aleatorio[2] && chute[1] != numero_aleatorio[3]) {
                printf("o segundo numero ta certo mas no lugar errado\n");
        }   else if (chute[1] != numero_aleatorio[0] && chute[1] != numero_aleatorio[1] && chute[1] == numero_aleatorio[2] && chute[1] != numero_aleatorio[3]) {
                printf("o segundo numero ta certo mas no lugar errado\n");
        }   else if (chute[1] != numero_aleatorio[0] && chute[1] != numero_aleatorio[1] && chute[1] != numero_aleatorio[2] && chute[1] == numero_aleatorio[3]) {
                printf("o segundo numero ta certo mas no lugar errado\n");
        }   else {
            printf("o segundo numero ta errado\n");
            verificavitoria = 0;
        } 
        if (chute[2] != numero_aleatorio[0] && chute[2] != numero_aleatorio[1] && chute[2] == numero_aleatorio[2] && chute[2] != numero_aleatorio[3]) {
                printf("o terceiro numero ta certo e no lugar certo\n");
                verificavitoria++;
        }   else if (chute[2] == numero_aleatorio[0] && chute[2] != numero_aleatorio[1] && chute[2] != numero_aleatorio[2] && chute[2] != numero_aleatorio[3]) {
                printf("o terceiro numero ta certo mas no lugar errado\n");
        }   else if (chute[2] != numero_aleatorio[0] && chute[2] == numero_aleatorio[1] && chute[2] != numero_aleatorio[2] && chute[2] != numero_aleatorio[3]) {
                printf("o terceiro numero ta certo mas no lugar errado\n");
        }   else if (chute[2] != numero_aleatorio[0] && chute[2] != numero_aleatorio[1] && chute[2] != numero_aleatorio[2] && chute[2] == numero_aleatorio[3]) {
                printf("o terceiro numero ta certo mas no lugar errado\n");
        }   else {
            printf("o terceiro numero ta errado\n");
            verificavitoria = 0;
        } 
        if (chute[3] != numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] != numero_aleatorio[2] && chute[3] == numero_aleatorio[3]) {
                printf("o quarto numero ta certo e no lugar certo\n");
                verificavitoria++;
        }   else if (chute[3] == numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] != numero_aleatorio[2] && chute[3] != numero_aleatorio[3]) {
                printf("o quarto numero ta certo mas no lugar errado\n");
        }   else if (chute[3] != numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] == numero_aleatorio[2] && chute[3] != numero_aleatorio[3]) {
                printf("o quarto numero ta certo mas no lugar errado\n");
        }   else if (chute[3] != numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] != numero_aleatorio[2] && chute[3] == numero_aleatorio[3]) {
                printf("o quarto numero ta certo mas no lugar errado\n");
        }   else {
            printf("o quarto numero ta errado\n");
            verificavitoria = 0;
        } 
        conttentativas++;

            printf("tentativas já utilizadas: %d / %d\n", conttentativas, MAXTENTATIVAS);
        if (verificavitoria == 4) {
            printf("Parabéns você ganhou adivinhando o código secreto!\n");
            printf("O código secreto era: %d %d %d %d\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);
            return 0;
        }
            verificavitoria = 0;
            i++;
        }
        printf("Que pena!, Você não acertou o código secreto!\n");
        printf("O código secreto era: %d %d %d %d\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);
    return 0;
}
}