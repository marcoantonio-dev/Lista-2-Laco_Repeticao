#include <stdio.h>
/*
8. Escreva um programa em C para verificar se um ano fornecido pelo usuário é bissexto ou não.
*/
int verificarAnoBissexto(int ano);

int main() {
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (verificarAnoBissexto(ano)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }

    return 0;
}

int verificarAnoBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}
