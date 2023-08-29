#include <stdio.h>

int main (){
    int escolha;
    float num1, num2, result;

    printf("Escolha a operacao:\n");
    printf("1.Soma\n");
    printf("2.Subtracao\n");
    printf("3.Multiplicacao\n");
    printf("4.Divisao\n");
    scanf("%d", &escolha);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (escolha) {
        case 1:
            result = num1 + num2;
            printf("Resultado: %.2f\n",result);
            break;
        case 2:
            result = num1 - num2;
            printf("Resultado: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Resultado: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0 ){
                result = num1 / num2;
                printf("Resultado: %.2f\n", result);

            } else {
                printf("Nao e possivel dividir por zero. \n");

            }
            break;
        default:
            printf("Opcao invalida. \n");




    }

    return 0;




}






