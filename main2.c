#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTENTATIVAS 10

typedef struct {
    int vitoria;
    int derrota;
    int desistencia;
    int rodando;
} Status;

int perguntarContinuar() {
    int continuar;

    printf("Gostaria de continuar tentando? (1 - Sim, 0 - Não): ");
    scanf("%d", &continuar);

    if (continuar == 0) {
        printf("O jogo acabou medroso\n");
        return 1; 
    } else {
        printf("Vamos continuar tentando\n");
        return 0; 
    }
}

int main() {
    int iniciar;
    int chute[4];
    int j, k;
    int i = 0;
    int numero_aleatorio[4];
    int L = 0;
    int conttentativas = 0;
    int verificavitoria = 0;
    int continuar;

    printf("\nBem vindo ao Mastermind!");
    printf("\nDigite 1 para jogar ou 0 para sair ");
    printf("\nVocê deseja jogar?");
    printf("\n1 - Jogar");
    printf("\n0 - Sair\n");
    printf("Opção: ");
    scanf("%d", &iniciar);

    if (iniciar == 0){
        printf("Medroso\n");
        return 1;
    } else if (iniciar > 1) {
        printf("É só entre 1 e 0\n");
        return 0;

    }  
    else {        
    Status status = {0, 0, 0, 1};
    srand(time(NULL));

    for (j = 0; j < 4; j++) {
    numero_aleatorio[j] = (rand() % 6) + 1;

    for (k = 0; k < j; k++) {
        if (numero_aleatorio[j] == numero_aleatorio[k]) {
            j--;
            break;
        }
    }
}


        
        printf("Vamos começar o jogo\n");
        printf("Você tera 10 tentativas para adivinhar um numero secreto\n");
        printf("Regras:\n");
        printf("O código tem 4 digitos que vão de 1 a 6\n\n");
        printf("Os números não se repetem no código\n\n");
        printf("Siga a maneira que o jogo ensina para dar seu palpite\n\n");
        printf("Se divirta\n\n");
        printf("--------\n\n");

        while (i < MAXTENTATIVAS){
            printf("Qual teu chute de 4 numeros? (De forma a ficar: X X X X): ");
            for(L = 0; L < 4; L++){
            scanf("%d", &chute[L]);}
            if (chute[0] == numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                printf("O primeiro numero ta certo e no lugar certo\n");
                verificavitoria++;
        }   else if (chute[0] != numero_aleatorio[0] && chute[0] == numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                printf("O primeiro numero ta certo mas no lugar errado\n");
        }   else if (chute[0] != numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] == numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                printf("O primeiro numero ta certo mas no lugar errado\n");
        }   else if (chute[0] != numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] == numero_aleatorio[3]) {
                printf("O primeiro numero ta certo mas no lugar errado\n");
        }   else {
            printf("O primeiro numero ta errado\n");
            verificavitoria = 0;
        } 
            if (chute[1] != numero_aleatorio[0] && chute[1] == numero_aleatorio[1] && chute[1] != numero_aleatorio[2] && chute[1] != numero_aleatorio[3]) {
                printf("O segundo numero ta certo e no lugar certo\n");
                verificavitoria++;
        }   else if (chute[1] == numero_aleatorio[0] && chute[1] != numero_aleatorio[1] && chute[1] != numero_aleatorio[2] && chute[1] != numero_aleatorio[3]) {
                printf("O segundo numero ta certo mas no lugar errado\n");
        }   else if (chute[1] != numero_aleatorio[0] && chute[1] != numero_aleatorio[1] && chute[1] == numero_aleatorio[2] && chute[1] != numero_aleatorio[3]) {
                printf("O segundo numero ta certo mas no lugar errado\n");
        }   else if (chute[1] != numero_aleatorio[0] && chute[1] != numero_aleatorio[1] && chute[1] != numero_aleatorio[2] && chute[1] == numero_aleatorio[3]) {
                printf("O segundo numero ta certo mas no lugar errado\n");
        }   else {
            printf("O segundo numero ta errado\n");
            verificavitoria = 0;
        } 
        if (chute[2] != numero_aleatorio[0] && chute[2] != numero_aleatorio[1] && chute[2] == numero_aleatorio[2] && chute[2] != numero_aleatorio[3]) {
                printf("O terceiro numero ta certo e no lugar certo\n");
                verificavitoria++;
        }   else if (chute[2] == numero_aleatorio[0] && chute[2] != numero_aleatorio[1] && chute[2] != numero_aleatorio[2] && chute[2] != numero_aleatorio[3]) {
                printf("O terceiro numero ta certo mas no lugar errado\n");
        }   else if (chute[2] != numero_aleatorio[0] && chute[2] == numero_aleatorio[1] && chute[2] != numero_aleatorio[2] && chute[2] != numero_aleatorio[3]) {
                printf("O terceiro numero ta certo mas no lugar errado\n");
        }   else if (chute[2] != numero_aleatorio[0] && chute[2] != numero_aleatorio[1] && chute[2] != numero_aleatorio[2] && chute[2] == numero_aleatorio[3]) {
                printf("O terceiro numero ta certo mas no lugar errado\n");
        }   else {
            printf("O terceiro numero ta errado\n");
            verificavitoria = 0;
        } 
        if (chute[3] != numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] != numero_aleatorio[2] && chute[3] == numero_aleatorio[3]) {
                printf("O quarto numero ta certo e no lugar certo\n");
                verificavitoria++;
        }   else if (chute[3] == numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] != numero_aleatorio[2] && chute[3] != numero_aleatorio[3]) {
                printf("O quarto numero ta certo mas no lugar errado\n");
        }   else if (chute[3] != numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] == numero_aleatorio[2] && chute[3] != numero_aleatorio[3]) {
                printf("O quarto numero ta certo mas no lugar errado\n");
        }   else if (chute[3] != numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] != numero_aleatorio[2] && chute[3] == numero_aleatorio[3]) {
                printf("O quarto numero ta certo mas no lugar errado\n");
        }   else {
            printf("O quarto numero ta errado\n");
            verificavitoria = 0;
        } 
        conttentativas++;

            printf(" --Tentativas já utilizadas: %d / %d--\n", conttentativas, MAXTENTATIVAS);
        if (verificavitoria == 4) {
            status.rodando = 0;
            status.vitoria = 1;
            return 0;
        }
            perguntarContinuar();
            *continuar = perguntarContinuar();
            if (*continuar == 1) {
                status.rodando = 0;
                status.desistencia = 1;
                return 0; 
            }
            if (status.vitoria == 1 && status.rodando == 0) {
                printf("--Parabéns, você acertou o código secreto!--\n");
                printf("--O código secreto era: %d %d %d %d--\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);
                return 0;
        }
        if
           


        verificavitoria = 0;
                        i++;

    }
    
        
        }//acaba while
    status.rodando = 0;
    status.derrota = 1;
    if (status.derrota == 1 && status.rodando == 0) {   
        printf("--Que pena!, Você não acertou o código secreto!--\n");
        printf("--O código secreto era: %d %d %d %d--\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);  
}//acaba else
        return 0;
}//acaba main