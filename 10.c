#include <stdio.h>
/*
10. Escreva um programa em C para imprimir uma pirâmide de números.
*/

void imprimirPiramide(int linhas);

int main() {
    int linhas;

    printf("Digite o numero de linhas da piramide: ");
    scanf("%d", &linhas);

    imprimirPiramide(linhas);

    return 0;
}

void imprimirPiramide(int linhas) {
    int espacos = linhas - 1;

    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= espacos; j++) {
            printf(" ");
        }
        espacos--;

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }

        printf("\n");
    }
}
