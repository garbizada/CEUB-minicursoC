#include <stdio.h>

int main() {
    int numero1;
    int numero2;
    float soma;
    float div;
    float subt;
    float multi;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    div = numero1 / numero2;
    subt = numero1 - numero2;
    multi = numero1 * numero2;

    printf("A soma dos numeros e : \n");
    printf("%d + %d = %.2f \n", numero1, numero2, soma);
    printf("A subtracao dos numeros e : \n");
    printf("%d - %d = %.2f \n", numero1, numero2, subt);
    printf("A divisao dos numeros e : \n");
    printf("%d / %d = %.2f \n", numero1, numero2, div);
    printf("A multiplicacao dos numeros e : \n");
    printf("%d * %d = %.2f \n", numero1, numero2, multi);


    return 0;
}