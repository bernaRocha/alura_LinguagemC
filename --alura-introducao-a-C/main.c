#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    printf("********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("********************************************\n");

    int numeroSecreto = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1;

    int pontos = 1000;

    while(ganhou == 0){
        printf("Tentativa %d\n", tentativas);
        printf("Qual � o seu chute? \n");

        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if(chute < 0) {
            printf("Voce nao pode chutar n�meros menor que 0.\n");
            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if(acertou){
            printf("Parab�ns! Voc� acertou!\n");
            printf("Jogue de novo!\n");

            ganhou = 1; // no lugar do break
        }
        else if(maior){
            printf("Seu chute foi maior que o n�mero secreto.\n");
        }
        else {
            printf("Seu chute foi menor que o n�mero secreto.\n");
        }
        tentativas +=1;

        int pontosPerdidos = (chute - numeroSecreto) / 2;
        pontos = pontos - pontosPerdidos;
    }
    printf("Fim de jogo!\n");
    printf("Voc� acertou em %d tentativas!\n", tentativas - 1);
    printf("Total de pontos: %d\n", pontos);

}



