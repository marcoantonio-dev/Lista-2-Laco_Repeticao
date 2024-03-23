#include <stdio.h>
/*
7. Faça um programa em C para exibir os números ímpares de 1 a 50.
*/

int verificarNumeroImpar(int numero);

int main() {
    printf("Numeros impares de 1 a 50:\n");
    for (int i = 1; i <= 50; i++) {
        if (verificarNumeroImpar(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int verificarNumeroImpar(int numero) {
    return numero % 2 != 0;
}
