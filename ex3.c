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

void lerDados(char *sexo, char *estadoCivil) {
    printf("Digite o sexo (X para encerrar):\n");
    printf("M - Masculino\n");
    printf("F - Feminino\n");
    scanf(" %c", sexo);

    if (*sexo != 'X') {
        printf("Digite o estado civil:\n");
        printf("S - Solteiro\n");
        printf("C - Casado\n");
        printf("D - Divorciado\n");
        scanf(" %c", estadoCivil);
    }
}

void calcularDistribuicaoSexo(char sexo, int *numPessoasMasculino, int *numPessoasFeminino) {
    if (sexo == 'M') {
        (*numPessoasMasculino)++;
    } else if (sexo == 'F') {
        (*numPessoasFeminino)++;
    }
}

float calcularPercentualSolteiros(int numPessoasSolteiras, int numPessoas) {
    return ((float) numPessoasSolteiras / numPessoas) * 100.0;
}

int main() {
    char sexo;
    char estadoCivil;
    int numPessoasMasculino = 0;
    int numPessoasFeminino = 0;
    int numPessoas = 0;
    int numPessoasSolteiras = 0;
    int numPessoasCasadas = 0;
    int numPessoasDivorciadas = 0;

    printf("Digite os dados da pesquisa:\n");
    while (1) {
        lerDados(&sexo, &estadoCivil);

        if (sexo == 'X') {
            break;
        }

        numPessoas++;
        calcularDistribuicaoSexo(sexo, &numPessoasMasculino, &numPessoasFeminino);

        if (estadoCivil == 'S') {
            numPessoasSolteiras++;
        } else if (estadoCivil == 'C') {
            numPessoasCasadas++;
        } else if (estadoCivil == 'D') {
            numPessoasDivorciadas++;
        }
    }

    float percentualSolteiros = calcularPercentualSolteiros(numPessoasSolteiras, numPessoas);

    printf("\nResultados da pesquisa:\n");
    printf("a) Distribuicao da populacao por sexo:\n");
    printf("   - Masculino: %d pessoas\n", numPessoasMasculino);
    printf("   - Feminino: %d pessoas\n", numPessoasFeminino);
    printf("b) Percentual de pessoas solteiras: %.2f%%\n", percentualSolteiros);
    printf("c) Quantidade de pessoas casadas: %d pessoas\n", numPessoasCasadas);
    printf("d) Percentual de pessoas divorciadas: %.2f%%\n", ((float) numPessoasDivorciadas / numPessoas) * 100.0);

    return 0;
}
