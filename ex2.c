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
int main()
{

    
    char corDaPele[20];
    char grauDeEscolaridade[30];
    short branco =0;
    short preto = 0;
    short amarelo = 0;
    short outro = 0;
    short codigo = 0;

    float percentualPessoasComSuperiorCompleto = 0;
    float percentualPessoasComMedioCompleto = 0;

    int EnsinoSuperior = 0;
    int EnsinoMedio = 0;

    int i = 0;

    for (i = 0; i < 15; i++)
    {
        printf("Digite a codigo respectivo a Cor da Sua Pele: \n");
        printf(" 1 - BRANCO");
        printf(" 2 - PRETO");
        printf(" 3 - AMARELO");
        printf(" 4 - OUTRO");
        scanf("%hd", &codigo);
        
        if (codigo == 1)
        {
            branco++;
        }else if (codigo == 2)
        {
            preto++;
        }else if (codigo == 3)
        {
            amarelo++;
        }else{
            outro++;
        }
        
        //feito daqui pra cima
        
        
        printf("Informe a Idade:\n");
        scanf(" %d", &idade);
        somaIdade += idade;

        printf("Sexo: *M* Masculino | *F* Feminino: \n");
        scanf(" %c", &sexo);

        if ((sexo == 'F' || sexo == 'f') && salario < 101.0)
        {
            qntdMulheres++;
        }
           
    }
    mediaSalarial = somaSalarial / 15;
    mediaIdade = somaIdade / 15;
    printf("Media salarial %f\n", mediaSalarial);
    printf("Media de idade %d\n", mediaIdade);
    printf("Quantidade de mulheres que recebm menos que 100 e igual a: %d", qntdMulheres);

}