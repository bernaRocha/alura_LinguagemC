#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char palavraSecreta [20];

    sprintf(palavraSecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    in tentativas = 0;

    do {

        for (int i = 0; i < strlen(palavraSecreta); i++){

            for(int j = 0; j < tentativas; j++){
                if(chutes[j] = palavraSecreta[i]) {
                    printf("%c ");
                    break;
                }
            }
            printf("_");
        }
        printf("\n");

        char chute;
        scanf(" %c", &chute); // Enter vai para o buffer

        chutes[tentativas] = chute;
        tentativas++;

    } while(!acertou && !enforcou);

    return 0;
}
