#include <stdio.h>
/*
3.  Pesquisa sobre Sexo e Estado Civil: 
   A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sexo e estado civil. A prefeitura deseja saber:
   a) distribuição da população por sexo;
   b) percentual de pessoas solteiras;
   c) quantidade de pessoas casadas;
   d) percentual de pessoas divorciadas.
   A pesquisa termina quando for inserido o valor "X" para o sexo.
*/

void lerDados(char sexo, char estadoCivil) {
    printf("Digite o sexo (M/F, X para encerrar): ");
    scanf(" %c", &sexo);

    if (sexo != 'X' && sexo != 'x') {
        printf("Digite o estado civil (S para solteiro, C para casado, D para divorciado): ");
        scanf(" %c", &estadoCivil);
    }
}

void calcularDistribuicaoSexo(char sexo, int *numPessoasPorSexo) {
    if (sexo == 'M' || sexo == 'm') {
        numPessoasPorSexo[0]++;
    } else if (sexo == 'F' || sexo == 'f') {
        numPessoasPorSexo[1]++;
    }
}

float calcularPercentualSolteiros(int numSolteiros, int numPessoas) {
    return ((float) numSolteiros / numPessoas) * 100.0;
}

int calcularQuantidadeCasados(int numCasados) {
    return numCasados;
}

float calcularPercentualDivorciados(int numDivorciados, int numPessoas) {
    return ((float) numDivorciados / numPessoas) * 100.0;
}

int main() {
    char sexo;
    char estadoCivil;
    int numPessoasPorSexo[2] = {0}; // Índices -> Secho: 0 - Masculino, 1 - Feminino
    int numPessoas = 0;
    int numSolteiros = 0;
    int numCasados = 0;
    int numDivorciados = 0;

    printf("Digite os dados da pesquisa:\n");
    while (1) {
        lerDados(sexo, estadoCivil);

        if (sexo == 'X' || sexo == 'x') {
            break;
        }

        numPessoas++;
        calcularDistribuicaoSexo(sexo, numPessoasPorSexo);

        if (estadoCivil == 'S' || estadoCivil == 's') {
            numSolteiros++;
        } else if (estadoCivil == 'C' || estadoCivil == 'c') {
            numCasados++;
        } else if (estadoCivil == 'D' || estadoCivil == 'd') {
            numDivorciados++;
        }
    }

    float percentualSolteiros = calcularPercentualSolteiros(numSolteiros, numPessoas);
    int quantidadeCasados = calcularQuantidadeCasados(numCasados);
    float percentualDivorciados = calcularPercentualDivorciados(numDivorciados, numPessoas);

    printf("\nResultados da pesquisa:\n");
    printf("a) Distribuicao da populacao por sexo:\n");
    printf("   - Masculino: %d pessoas\n", numPessoasPorSexo[0]);
    printf("   - Feminino: %d pessoas\n", numPessoasPorSexo[1]);
    printf("b) Percentual de pessoas solteiras: %.2f%%\n", percentualSolteiros);
    printf("c) Quantidade de pessoas casadas: %d\n", quantidadeCasados);
    printf("d) Percentual de pessoas divorciadas: %.2f%%\n", percentualDivorciados);

    return 0;
}
