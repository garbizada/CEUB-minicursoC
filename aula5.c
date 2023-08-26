#include <stdio.h>

int main() {
    char texto;

    printf("Digite uma letra entre a,b e c: \n");
    scanf("%c", &texto);

    switch (texto) {
        case 'a': 
        printf("vc escolheu a letra a!!parabens");
        break;

        case 'b':
        printf("vc escolheu a letra b!!burrao");
        break;

        case 'c':
        printf("vc foi o mais esperto escolheu a letra c ganhou um milhao");
        break;

        default: 
        printf("O burrao entre a, b e c(MINUSCULO),idiota!");
        



    }

    return 0;
}