#include <stdio.h>
/*
4.  Pesquisa sobre Profissão e Renda: 
   A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre a profissão e renda mensal. A prefeitura deseja saber:
   a) média da renda mensal da população;
   b) profissão com maior média de renda;
   c) percentual de pessoas desempregadas;
   d) percentual de pessoas com renda acima de R$ 5000,00.
   A pesquisa termina quando for inserido o valor "x" para a renda.
*/

float obterRenda();
short obterProfissao();
float calcularMedia(float soma, int total);
float calcularPercentual(int parte, int total);

int main() {
    float renda;
    short profissao;
    int totalPessoas = 0, totalMedicos = 0, totalProfessores = 0, totalDesempregados = 0, totalRendaAlta = 0;
    float somaRendaTotal = 0, somaRendaMedicos = 0, somaRendaProfessores = 0;

    renda = obterRenda();

    while (renda != -1) {
        somaRendaTotal += renda;
        totalPessoas++;

        if (renda > 5000) {
            totalRendaAlta++;
        }

        profissao = obterProfissao();

        if (profissao == 1) {
            totalMedicos++;
            somaRendaMedicos += renda;
        } else if (profissao == 2) {
            totalProfessores++;
            somaRendaProfessores += renda;
        } else if (profissao == 3) {
            totalDesempregados++;
        }

        renda = obterRenda();
    }

    float mediaRendaTotal = calcularMedia(somaRendaTotal, totalPessoas);
    float percentualDesempregados = calcularPercentual(totalDesempregados, totalPessoas);
    float percentualRendaAlta = calcularPercentual(totalRendaAlta, totalPessoas);
    float mediaRendaMedicos = calcularMedia(somaRendaMedicos, totalMedicos);
    float mediaRendaProfessores = calcularMedia(somaRendaProfessores, totalProfessores);

    printf("Resultados:\n");
    printf("- Media da renda total: R$%.2f\n", mediaRendaTotal);
    printf("- Profissao com maior media de renda: %s\n", (mediaRendaMedicos > mediaRendaProfessores) ? "Medico" : "Professor");
    printf("- Percentual de desempregados: %.2f%%\n", percentualDesempregados);
    printf("- Percentual de pessoas com renda acima de R$5000: %.2f%%\n", percentualRendaAlta);

    return 0;
}

float obterRenda() {
    float renda;
    char opcao;

    printf("Digite sua renda (x encerra execucao): R$");
    scanf("%f", &renda);
    scanf(" %c", &opcao);

    if (opcao == 'x') {
        return -1;
    }

    return renda;
}

short obterProfissao() {
    short profissao;

    printf("1 - Medico\n");
    printf("2 - Professor\n");
    printf("3 - Desempregado\n");
    printf("Profissao: ");
    scanf("%hd", &profissao);

    return profissao;
}

float calcularMedia(float soma, int total) {
    return (float)soma / total;
}

float calcularPercentual(int parte, int total) {
    return (float)(parte * 100) / total;
}
