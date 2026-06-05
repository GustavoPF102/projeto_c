#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTENTATIVASEASY 10 //limites de tentativas para os modos
#define MAXTENTATIVASHARD 5

typedef struct { //struct pra armazenar o status do jogo
    int vitoria;
    int derrota;
    int desistencia;
} Status;

int perguntarContinuar() { // função para possivel desistência do jogo
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

int main() { //começa o main
    Status status = {0, 0, 0};//inicializa o status do jogo
    int iniciar;// todas as variáveis usadas no código
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

    printf("\nBem vindo ao Mastermind!"); //inicia o menu do jogo
    printf("\nDigite 1 para jogar ou 0 para sair ");
    printf("\nVocê deseja jogar?");
    printf("\n1 - Jogar");
    printf("\n0 - Sair\n");
    printf("Opção: ");// decisão de iniciar o jogo ou não
    scanf("%d", &iniciar);

    if (iniciar == 0){//recebendo resposta para iniciar o jogo ou não
        status.desistencia = 1;
        printf("--Você desistiu do jogo!--\n");
        printf("Status do Jogo: Desistência!\n");
        return 1;
    } else if (iniciar > 1) {
        printf("É só entre 1 e 0\n");
        return 0;

    }  
    else { 
        printf("Em que modo você quer jogar?\n");// escolha do modo de jogo
        printf("1 - Modo Fácil (4 dígitos, números de 1 a 6, sem repetição)\n");// explicação dos modos de jogo
        printf("2 - Modo Difícil (4 dígitos, números de 1 a 6, sem repetição, e com dicas limitadas)\n");
        printf("Opção: ");//recebendo resposta para escolha do modo de jogo
        scanf("%d", &modo);
    }if (modo == 1) {
        printf("Você escolheu o Modo Fácil!\n");//começa o modo facil

    srand(time(NULL));// geração dos números aleatórios para o código secreto, garantindo que não haja repetição de números no código
    for (j = 0; j < 4; ) {
    numero_aleatorio[j] = (rand() % 6) + 1;

    for (k = 0; k < j; k++) {//garantindo que os numeros gerados nao sejam repetidos
        if (numero_aleatorio[j] == numero_aleatorio[k]) {
            break;
        }
    }

    if (k == j) { 
       j++;
}
}
    
        printf("--------------------\n");//explicação das regras do jogo
        printf("Vamos começar o jogo\n");
        printf("Você tera 10 tentativas para adivinhar um numero secreto\n");
        printf("Regras:\n");
        printf("O código tem 4 digitos que vão de 1 a 6\n");
        printf("Os números não se repetem no código\n");
        printf("Siga a maneira que o jogo ensina para dar seu palpite\n");
        printf("Se divirta\n");
       printf("--------------------\n");


        while (i < MAXTENTATIVASEASY){//começa o loop de tentativas do modo facil
            printf("Qual teu chute de 4 numeros? (De forma a ficar: X X X X): ");
            for(L = 0; L < 4; L++){
            scanf("%d", &chute[L]);}
            if (chute[0] == numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                printf("O primeiro numero ta certo e no lugar certo\n");
                verificavitoria++;//area de verificação do chute do jogador (ate a linha 147)
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
        conttentativas++;//contador de tentativas ja usadas

            printf(" --Tentativas já utilizadas: %d / %d--\n", conttentativas, MAXTENTATIVASEASY);//mostrando as tentativas
        if (verificavitoria == 4) {//verificando se o jogador acertou o código secreto
            status.vitoria = 1;
            printf("--Parabéns, você acertou o código secreto!--\n");//parabenizando o jogador por acertar o código secreto
            printf("--O código secreto era: %d %d %d %d--\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);
            printf("Status do Jogo: Vitória!\n");//mostrando o status do jogo
            return 0;
        }
            continuar = perguntarContinuar();// perguntando se o jogador quer desistir
            if (continuar == 1) {
                status.desistencia = 1;//mudando o status do jogo para desistência caso o jogador queira desistir
                return 0;
            }
                
            
        verificavitoria = 0;
        i++;//aumentando o ciclo do while para nao ser um ciclo infinito
        }
        status.derrota = 1;//mudando o status do jogo para derrota caso o jogador nao acerte o código secreto em 10 tentativas
        printf("--Que pena!, Você não acertou o código secreto!--\n");//perdeu kkk que burro
        printf("--O código secreto era: %d %d %d %d--\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);  
        printf("Status do Jogo: Derrota!\n");//status do jogo
        return 0;
    }   else if (modo == 2) { //começa o modo HARDCORE
        printf("Você escolheu o Modo Difícil!\n");
            srand(time(NULL));//gerando novamente os numeros aleatorios
        for (j = 0; j < 4; ) {
        numero_aleatorio[j] = (rand() % 6) + 1;

        for (k = 0; k < j; k++) {
            if (numero_aleatorio[j] == numero_aleatorio[k]) {
                break;
            }
        }

        if (k == j) {
            printf("Número gerado: %d\n", numero_aleatorio[j]);
        j++;
}
}       printf("--------------------\n");//explicando as regras do hardmode
        printf("Vamos começar o jogo\n");
        printf("Você tera 10 tentativas para adivinhar um numero secreto\n");
        printf("Regras:\n");
        printf("O código tem 4 digitos que vão de 1 a 6\n");
        printf("Os números não se repetem no código\n");
        printf("Siga a maneira que o jogo ensina para dar seu palpite\n");
        printf("Se divirta\n");
        printf("--------------------\n");
        

        while (i < MAXTENTATIVASHARD){//começa o loop de tentativas do modo dificil
            printf("Qual teu chute de 4 numeros? (De forma a ficar: X X X X): ");
            for(L = 0; L < 4; L++){
            scanf("%d", &chute[L]);}
            if (chute[0] == numero_aleatorio[0] && chute[0] != numero_aleatorio[1] && chute[0] != numero_aleatorio[2] && chute[0] != numero_aleatorio[3]) {
                certosnolugarcerto++;//verifica se esta certo e no lugar certo, caso esteja, aumenta o contador de acertos no lugar certo e o contador de vitoria 
                verificavitoria++;//verifica vitora denovo
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
        printf("Certos números no lugar certo: %d\n", certosnolugarcerto);//mostrando as dicas do hardmode
        printf("Certos números no lugar errado: %d\n", certosnolugarerrado);
        conttentativas++;// aumentando as tentativas usadas
            printf(" --Tentativas já utilizadas: %d / %d--\n", conttentativas, MAXTENTATIVASHARD);//mostrando tentativas restantes
        certosnolugarcerto = 0;//resenatnto os contadores de dicas para a proxima tentativa
        certosnolugarerrado = 0;
        if (verificavitoria == 4) {//verifica a vitoria do hardmode
            status.vitoria = 1;//mudando o status do jogo para vitoria
            printf("--Parabéns, você acertou o código secreto!--\n");//parabenizando o jogador por acertar o código secreto
            printf("--O código secreto era: %d %d %d %d--\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);
            printf("Status do Jogo: Vitória!\n");//mostrando o status do jogo
            return 0;
        }
            continuar = perguntarContinuar();//função de desistencia denovo
            if (continuar == 1) {
                status.desistencia = 1;//mudando o status do jogo para desistencia
                return 0;
            }
        verificavitoria = 0;//resetando o contador de vitoria para a proxima tentativa
        i++;//aumentando o ciclo do while para nao ser um ciclo infinito
        }
        status.derrota = 1;//mudando o status do jogo para derrota caso o jogador nao acerte o código secreto em 5 tentativas
        printf("--Que pena!, Você não acertou o código secreto!--\n");//perdedor kkk
        printf("--O código secreto era: %d %d %d %d--\n", numero_aleatorio[0], numero_aleatorio[1], numero_aleatorio[2], numero_aleatorio[3]);  
        printf("Status do Jogo: Derrota!\n");//mostrando o status do jogo
        return 0;
    } else {//else para caso o jogador escolha uma opção de modo de jogo inválida
        printf("Opção inválida. Por favor, escolha 1 para Modo Fácil ou 2 para Modo Difícil.\n");
        return 0;
    }
}
//Considerações finais: o codigo ficou bem grande, mais por causa da verificação e da adição de outro modo de jogo
//O código funciona, mas tem muita repetição, principalmente na parte de verificação do chute do jogador.
//para melhorar o codigo: poderia fazer toda a verificação em um for para poupar espaço
//poderia ter transformado a parte do menu em uma função para deixar o main mais limpo
//poderia ter adicionado mais modos de jogo, como um modo com números repetidos
//poderia ter adicionado um sistema de pontuação para deixar o jogo mais interessante