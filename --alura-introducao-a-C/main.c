#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    printf("********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("********************************************\n");

    int numeroSecreto = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1;

    while(ganhou == 0){
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? \n");

        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if(chute < 0) {
            printf("Voce nao pode chutar números menor que 0.\n");
            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if(acertou){
            printf("Parabéns! Você acertou!");
            printf("Jogue de novo!");

            ganhou = 1; // no lugar do break
        }
        else if(maior){
            printf("Seu chute foi maior que o número secreto.\n");
        }
        else {
            printf("Seu chute foi menor que o número secreto.\n");
        }
        tentativas +=1;
    }
    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!", tentativas - 1);

}



