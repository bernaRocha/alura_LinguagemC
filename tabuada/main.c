#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "");

    int numero;
    printf("De qual número você quer a tabuada?");
    scanf("%d", &numero);

    for(int i = 0; i <= 10; i++) {
        int multiplicacao = numero * i;
        printf("%d x %d = %d\n", numero, i, multiplicacao);
    }
}
