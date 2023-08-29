#include <stdio.h>


int main() {
    char nome[] = "Caue";           // [] para abrir a lista
    int nota1 = 10;
    float nota2 = 8.65;

    printf(" Nome: %s\n ", nome);              // %s para string
    printf("nota 1 : %d\n ", nota1);           // %d para numero inteiro
    printf("nota 2 : %.2f\n ", nota2);         // %.2f para numeros flutuantes com duas casas decimais

    return 0;
}