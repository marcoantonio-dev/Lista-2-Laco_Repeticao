#include <stdio.h>
/*
9. Faça um programa em C para calcular a potência de um número.
*/

int calcularPotencia(int base, int expoente);

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("O resultado da potencia e: %d\n", calcularPotencia(base, expoente));

    return 0;
}

int calcularPotencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

