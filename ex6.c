#include <stdio.h>
/*
6. Escreva um programa em C para calcular a soma dos números pares de 1 a 100.
*/

int calcularSomaPares();

int main() {
    int somaPares = calcularSomaPares();
    printf("A soma dos numeros pares de 1 a 100 eh: %d\n", somaPares);
    return 0;
}

int calcularSomaPares() {
    int soma = 0;
    for (int i = 2; i <= 100; i += 2) {
        soma += i;
    }
    return soma;
}

