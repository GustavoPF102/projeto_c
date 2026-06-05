#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTENTATIVASEASY 10
#define MAXTENTATIVASHARD 5

typedef struct {
    int vitoria;
    int derrota;
    int desistencia;
} Status;

int perguntarContinuar() {
    int continuar;

    printf("Gostaria de continuar tentando? (1 - Sim, 0 - Não): ");
    scanf("%d", &continuar);

    if (continuar == 0) {
        printf("--Você desistiu do jogo!--\n");
        printf("Status do Jogo: Desistência!\n");
        return 1; 
    } else {
        printf("Vamos continuar tentando\n");
        return 0; 
    }
}

int main() {
    Status status = {0, 0, 0};
    int iniciar;
    int chute[4];
    int j, k;
    int i = 0;
    int numero_aleatorio[4];
    int L = 0;
    int conttentativas = 0;
    int verificavitoria = 0;
    int continuar;
    int modo;
    int certosnolugarcerto = 0;
    int certosnolugarerrado = 0;

    printf("\nBem vindo ao Mastermind!");
    printf("\nDigite 1 para jogar ou 0 para sair ");
    printf("\nVocê deseja jogar?");
    printf("\n1 - Jogar");
    printf("\n0 - Sair\n");
    printf("Opção: ");
    scanf("%d", &iniciar);

    if (iniciar == 0){
        status.desistencia = 1;
        printf("--Você desistiu do jogo!--\n");
        printf("Status do Jogo: Desistência!\n");
        return 1;
    } else if (iniciar > 1) {
        printf("É só entre 1 e 0\n");
        return 0;

    }  
    else { 
        printf("Em que modo você quer jogar?\n");
        printf("1 - Modo Fácil (4 dígitos, números de 1 a 6, sem repetição)\n");
        printf("2 - Modo Difícil (4 dígitos, números de 1 a 6, sem repetição, e com dicas limitadas)\n");
        printf("Opção: ");
        scanf("%d", &modo);
    }if (modo == 1) {
        printf("Você escolheu o Modo Fácil!\n");

    
    srand(time(NULL));
    for (j = 0; j < 4; ) {
    numero_aleatorio[j] = (rand() % 6) + 1;

    for (k = 0; k < j; k++) {
        if (numero_aleatorio[j] == numero_aleatorio[k]) {
            break;
        }
    }

    if (k == j) {
       printf("%d ", numero_aleatorio[j]); 
       j++;
}
}
    
        
        printf("Vamos começar o jogo\n");
        printf("Você tera 10 tentativas para adivinhar um numero secreto\n");
        printf("Regras:\n");
        printf("O código tem 4 digitos que vão de 1 a 6\n");
        printf("Os números não se repetem no código\n");
        printf("Siga a maneira que o jogo ensina para dar seu palpite\n");
        printf("Se divirta\n");
        printf("--------\n");

        while (i < MAXTENTATIVASEASY){
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
        } 
        conttentativas++;

            printf(" --Tentativas já utilizadas: %d / %d--\n", conttentativas, MAXTENTATIVASEASY);
        if (verificavitoria == 4) {
            status.vitoria = 1;
            printf("--Parabéns, você acertou o código secreto!--\n");
            printf("--O código secreto era: %d %d %d %d--\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);
            printf("Status do Jogo: Vitória!\n");
            return 0;
        }
            continuar = perguntarContinuar();
            if (continuar == 1) {
                status.desistencia = 1;
                return 0;
            }
                
            
        verificavitoria = 0;
        i++;
        }
        status.derrota = 1;
        printf("--Que pena!, Você não acertou o código secreto!--\n");
        printf("--O código secreto era: %d %d %d %d--\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);  
        printf("Status do Jogo: Derrota!\n");
        return 0;
    }else if (modo == 2) {
        printf("Você escolheu o Modo Difícil!\n");
            srand(time(NULL));
        for (j = 0; j < 4; ) {
        numero_aleatorio[j] = (rand() % 6) + 1;

        for (k = 0; k < j; k++) {
            if (numero_aleatorio[j] == numero_aleatorio[k]) {
                break;
            }
        }

        if (k == j) {
        printf("%d ", numero_aleatorio[j]); 
        j++;
}
}
        printf("Vamos começar o jogo\n");
        printf("Você tera 10 tentativas para adivinhar um numero secreto\n");
        printf("Regras:\n");
        printf("O código tem 4 digitos que vão de 1 a 6\n");
        printf("Os números não se repetem no código\n");
        printf("Siga a maneira que o jogo ensina para dar seu palpite\n");
        printf("Se divirta\n");
        printf("--------\n");

        while (i < MAXTENTATIVASHARD){
            printf("Qual teu chute de 4 numeros? (De forma a ficar: X X X X): ");
            for(L = 0; L < 4; L++){
            scanf("%d", &chute[L]);}
            if (chute[0] == numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                certosnolugarcerto++;
                verificavitoria++;
        }   else if (chute[0] != numero_aleatorio[0] && chute[0] == numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else if (chute[0] != numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] == numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else if (chute[0] != numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] == numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else {
        } 
            if (chute[1] != numero_aleatorio[0] && chute[1] == numero_aleatorio[1] && chute[1] != numero_aleatorio[2] && chute[1] != numero_aleatorio[3]) {
                certosnolugarcerto++;
                verificavitoria++;
        }   else if (chute[1] == numero_aleatorio[0] && chute[1] != numero_aleatorio[1] && chute[1] != numero_aleatorio[2] && chute[1] != numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else if (chute[1] != numero_aleatorio[0] && chute[1] != numero_aleatorio[1] && chute[1] == numero_aleatorio[2] && chute[1] != numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else if (chute[1] != numero_aleatorio[0] && chute[1] != numero_aleatorio[1] && chute[1] != numero_aleatorio[2] && chute[1] == numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else {
        } 
        if (chute[2] != numero_aleatorio[0] && chute[2] != numero_aleatorio[1] && chute[2] == numero_aleatorio[2] && chute[2] != numero_aleatorio[3]) {
                certosnolugarcerto++;
                verificavitoria++;
        }   else if (chute[2] == numero_aleatorio[0] && chute[2] != numero_aleatorio[1] && chute[2] != numero_aleatorio[2] && chute[2] != numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else if (chute[2] != numero_aleatorio[0] && chute[2] == numero_aleatorio[1] && chute[2] != numero_aleatorio[2] && chute[2] != numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else if (chute[2] != numero_aleatorio[0] && chute[2] != numero_aleatorio[1] && chute[2] != numero_aleatorio[2] && chute[2] == numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else {
        } 
        if (chute[3] != numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] != numero_aleatorio[2] && chute[3] == numero_aleatorio[3]) {
                certosnolugarcerto++;
                verificavitoria++;
        }   else if (chute[3] == numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] != numero_aleatorio[2] && chute[3] != numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else if (chute[3] != numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] == numero_aleatorio[2] && chute[3] != numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else if (chute[3] != numero_aleatorio[0] && chute[3] != numero_aleatorio[1] && chute[3] != numero_aleatorio[2] && chute[3] == numero_aleatorio[3]) {
                certosnolugarerrado++;
        }   else {
        } 
        printf("Certos números no lugar certo: %d\n", certosnolugarcerto);
        printf("Certos números no lugar errado: %d\n", certosnolugarerrado);
        conttentativas++;
            printf(" --Tentativas já utilizadas: %d / %d--\n", conttentativas, MAXTENTATIVASHARD);
        certosnolugarcerto = 0;
        certosnolugarerrado = 0;
        if (verificavitoria == 4) {
            status.vitoria = 1;
            printf("--Parabéns, você acertou o código secreto!--\n");
            printf("--O código secreto era: %d %d %d %d--\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);
            printf("Status do Jogo: Vitória!\n");
            return 0;
        }
            continuar = perguntarContinuar();
            if (continuar == 1) {
                status.desistencia = 1;
                return 0;
            }
        verificavitoria = 0;
        i++;
        }
        status.derrota = 1;
        printf("--Que pena!, Você não acertou o código secreto!--\n");
        printf("--O código secreto era: %d %d %d %d--\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);  
        printf("Status do Jogo: Derrota!\n");
        return 0;
    } else {
        printf("Opção inválida. Por favor, escolha 1 para Modo Fácil ou 2 para Modo Difícil.\n");
        return 0;
    }
        

    }//acaba else
//acaba main