#include <stdio.h>
/*
2.  Pesquisa sobre Cor da Pele e Grau de Escolaridade: 
   A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre a cor da pele e grau de escolaridade. 
   A prefeitura deseja saber:
   a) distribuição da população por cor da pele;
   b) percentual de pessoas com ensino superior completo;
   c) percentual de pessoas com ensino médio incompleto.
   A pesquisa termina quando for inserido o valor -1 para cor da pele.
*/

void lerDados(int *corPele, int *grauEscolaridade) {
    printf("Digite a cor da pele (-1 para encerrar):\n");
    printf("0 - Branca\n");
    printf("1 - Preta\n");
    printf("2 - Parda\n");
    printf("3 - Outra\n");
    scanf("%d", corPele);

    if (*corPele != -1) {
        printf("Digite o numero correspondente ao grau de escolaridade:\n");
        printf("1 - Ensino Medio Incompleto\n");
        printf("2 - Ensino Superior Completo\n");
        scanf("%d", grauEscolaridade);
    }
}

void calcularDistribuicaoCorPele(int corPele, int *numPessoasPorCor) {
    if (corPele >= 0 && corPele <= 3) {
        numPessoasPorCor[corPele]++;
    }
}

float calcularPercentualEnsinoSuperior(int numPessoasSuperior, int numPessoas) {
    return ((float) numPessoasSuperior / numPessoas) * 100.0;
}

float calcularPercentualEnsinoMedioIncompleto(int numPessoasMedioIncompleto, int numPessoas) {
    return ((float) numPessoasMedioIncompleto / numPessoas) * 100.0;
}

int main() {
    int corPele;
    int grauEscolaridade;
    int numPessoasPorCor[4] = {0}; // Indices representam as cores: 0 - Branca, 1 - Preta, 2 - Parda, 3 - Outra
    int numPessoas = 0;
    int numPessoasSuperior = 0;
    int numPessoasMedioIncompleto = 0;

    printf("Digite os dados da pesquisa:\n");
    while (1) {
        lerDados(&corPele, &grauEscolaridade);

        if (corPele == -1) {
            break;
        }

        numPessoas++;
        calcularDistribuicaoCorPele(corPele, numPessoasPorCor);

        if (grauEscolaridade == 2) {
            numPessoasSuperior++;
        } else if (grauEscolaridade == 1) {
            numPessoasMedioIncompleto++;
        }
    }

    float percentualSuperior = calcularPercentualEnsinoSuperior(numPessoasSuperior, numPessoas);
    float percentualMedioIncompleto = calcularPercentualEnsinoMedioIncompleto(numPessoasMedioIncompleto, numPessoas);

    printf("\nResultados da pesquisa:\n");
    printf("a) Distribuicao da populacao por cor da pele:\n");
    printf("   - Branca: %d pessoas\n", numPessoasPorCor[0]);
    printf("   - Preta: %d pessoas\n", numPessoasPorCor[1]);
    printf("   - Parda: %d pessoas\n", numPessoasPorCor[2]);
    printf("   - Outra: %d pessoas\n", numPessoasPorCor[3]);
    printf("b) Percentual de pessoas com ensino superior completo: %.2f%%\n", percentualSuperior);
    printf("c) Percentual de pessoas com ensino medio incompleto: %.2f%%\n", percentualMedioIncompleto);

    return 0;
}
