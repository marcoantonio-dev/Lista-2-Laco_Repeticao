#include <stdio.h>
/*
1.  Pesquisa sobre Idade e Altura: 
   A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre a idade e altura. 
   A prefeitura deseja saber:
   a) média da idade da população;
   b) média da altura da população;
   c) maior idade registrada;
   d) percentual de pessoas com altura acima de 1,80 metros.
   O final da leitura de dados se dará com a entrada de uma idade negativa.

*/

float calcularMediaIdade(int totalIdades, int numPessoas) {
    return (float) totalIdades / numPessoas;
}

float calcularMediaAltura(float totalAlturas, int numPessoas) {
    return totalAlturas / numPessoas;
}

int encontrarMaiorIdade(int maiorIdade, int idade) {
    if (idade > maiorIdade) {
        return idade;
    } else {
        return maiorIdade;
    }
}

float calcularPercentualAltura(int numPessoasAltura, int numPessoas) {
    return ((float) numPessoasAltura / numPessoas) * 100.0;
}

int main() {
    int idade;
    int totalIdades = 0;
    int numPessoas = 0;
    int maiorIdade = 0;
    int numPessoasAltura = 0;

    float altura;
    float totalAlturas = 0.0;
    float percentualAlturaAlta = 0.0;

    printf("Digite a idade e a altura dos habitantes (digite uma idade negativa para encerrar):\n");
    while (1) {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Altura: ");
        scanf("%f", &altura);

        totalIdades += idade;
        totalAlturas += altura;
        numPessoas++;

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        if (altura > 1.80) {
            numPessoasAltura++;
        }
    }

    float mediaIdade = calcularMediaIdade(totalIdades, numPessoas);
    float mediaAltura = calcularMediaAltura(totalAlturas, numPessoas);
    percentualAlturaAlta = calcularPercentualAltura(numPessoasAltura, numPessoas);

    printf("\nResultados da pesquisa:\n");
    printf("a) Media da idade da populacao: %.2f anos\n", mediaIdade);
    printf("b) Media da altura da populacao: %.2f metros\n", mediaAltura);
    printf("c) Maior idade registrada: %d anos\n", maiorIdade);
    printf("d) Percentual de pessoas com altura acima de 1,80 metros: %.2f%%\n", percentualAlturaAlta);

    return 0;
}
