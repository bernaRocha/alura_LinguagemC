#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // Lib para gerar número aleatório
int main()
{
    setlocale(LC_ALL, "");

    printf("********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("********************************************\n");

    //int numeroSecreto = 42;   Agora será um número randômico

    int segundos = time(0);
    srand(segundos); // seed rand

    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Escolha o nível de dificuldade. \n");
    printf("[1] Piece of cake [2] I´m brave [3] I´m the boss.\n\n");
    printf("Make a choice: ");
    scanf("%d", &nivel);

    int numeroTentativas;

    switch(nivel) {
    case 1:
        numeroTentativas = 20;
        break;
    case 2:
        numeroTentativas = 15;
        break;
    default:
        numeroTentativas = 6;
        break;
    }
/*  if(nivel == 1) {
        numeroTentativas = 20;
    }
    else if (nivel == 2) {
        numeroTentativas = 15;
    }
    else {
        numeroTentativas = 6;
    }
*/
    for (int i = 1; i <= numeroTentativas; i++){

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? \n");

        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if(chute < 0) {
            printf("Voce nao pode chutar números menor que 0.\n");
            continue;
        }

        acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if(acertou){
            break;
        }

        else if(maior){
            printf("Seu chute foi maior que o número secreto.\n");
        }

        else {
            printf("Seu chute foi menor que o número secreto\n");
        }

        tentativas +=1;

        double pontosPerdidos = abs(chute - numeroSecreto) / 2.0;
        pontos = pontos - pontosPerdidos;
    }

        printf("Fim de jogo!\n");

        if(acertou) {
            printf("Congratulations! You´re the winner!\n");
            printf("Você acertou em %d tentativas!\n", tentativas - 1);
            printf("Total points: %.1f\n", pontos);
        } else {
        printf("You lost! Try again, try harder!\n");
        }


}






