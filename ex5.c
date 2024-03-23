#include <stdio.h>
/*
5.  Pesquisa sobre Nível de Satisfação e Tempo de Residência: 
   A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o nível de satisfação com a cidade e tempo de residência. A prefeitura deseja saber:
   a) média do nível de satisfação da população;
   b) tempo de residência médio na cidade;
   c) percentual de pessoas insatisfeitas;
   d) percentual de pessoas que residem na cidade há mais de 10 anos.
   A pesquisa termina quando for inserido o valor -1 para o nível de satisfação.
*/

float obterNivelSatisfacao();
int obterTempoResidencia();
float calcularMedia(float soma, int total);
float calcularPercentual(int parte, int total);

int main() {
    float nivelSatisfacao;
    int tempoResidencia;
    int totalPessoas = 0, totalResidenciaLonga = 0, totalInsatisfeitas = 0;
    float somaNivelSatisfacao = 0, somaTempoResidencia = 0;

    nivelSatisfacao = obterNivelSatisfacao();

    while (nivelSatisfacao != -1) {
        somaNivelSatisfacao += nivelSatisfacao;

        tempoResidencia = obterTempoResidencia();
        somaTempoResidencia += tempoResidencia;

        if (nivelSatisfacao < 5) {
            totalInsatisfeitas++;
        }

        if (tempoResidencia > 10) {
            totalResidenciaLonga++;
        }

        totalPessoas++;

        nivelSatisfacao = obterNivelSatisfacao();
    }

    float mediaNivelSatisfacao = calcularMedia(somaNivelSatisfacao, totalPessoas);
    float mediaTempoResidencia = calcularMedia(somaTempoResidencia, totalPessoas);
    float percentualInsatisfeitas = calcularPercentual(totalInsatisfeitas, totalPessoas);
    float percentualResidenciaLonga = calcularPercentual(totalResidenciaLonga, totalPessoas);

    printf("Resultados:\n");
    printf("a) Media do nivel de satisfacao da populacao: %.2f\n", mediaNivelSatisfacao);
    printf("b) Tempo de residencia medio na cidade: %.2f anos\n", mediaTempoResidencia);
    printf("c) Percentual de pessoas insatisfeitas: %.2f%%\n", percentualInsatisfeitas);
    printf("d) Percentual de pessoas que residem na cidade ha mais de 10 anos: %.2f%%\n", percentualResidenciaLonga);

    return 0;
}

float obterNivelSatisfacao() {
    float nivelSatisfacao;

    printf("Digite o nivel de satisfacao (-1 para encerrar): ");
    scanf("%f", &nivelSatisfacao);

    return nivelSatisfacao;
}

int obterTempoResidencia() {
    int tempoResidencia;

    printf("Digite o tempo de residencia na cidade (anos): ");
    scanf("%d", &tempoResidencia);

    return tempoResidencia;
}

float calcularMedia(float soma, int total) {
    return total != 0 ? soma / total : 0;
}

float calcularPercentual(int parte, int total) {
    return total != 0 ? (float)(parte * 100) / total : 0;
}

