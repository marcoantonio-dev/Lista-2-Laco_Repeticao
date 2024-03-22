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
int main()
{

    short idade = 0;
    float altura = 0.0;
    short mediaDaIdade = 0;
    short somaDaIdade = 0;
    float mediaDaAltura = 0;
    float somaDaAltura =0;
    short maiorIdadeRegistrada = 0;
    float alturaMaior180 = 0.0;
    short numeroDePessoas = 0;
    float maiorAltura = 0;

    while (idade > -1) {

        printf("Digite seu idade: ");
        scanf("%hd", &idade);

        if (idade < 0) {
            break;
        }

        printf("Digite sua altura: ");
        scanf("%f", &altura);

        if (altura > 1.80) {
            alturaMaior180++;
        }

        if(maiorAltura < altura) {
            maiorAltura = altura;
        }

        if (maiorIdadeRegistrada < idade)
        {
            maiorIdadeRegistrada  = idade;
        }
        

        somaDaIdade += idade;
        somaDaAltura += altura;
        numeroDePessoas++;
    }

     mediaDaIdade = somaDaIdade / numeroDePessoas;
     mediaDaAltura = somaDaAltura / numeroDePessoas;
     alturaMaior180 = alturaMaior180 / numeroDePessoas * 100.0;

    printf("A Media da idade da populacao e de: %hd anos \n", mediaDaIdade);
    printf("A Media da altura da populacao e de: %f centimetros \n", mediaDaAltura);
    printf("A maior altura de todas as pessoas e: %f\n", maiorAltura);
    printf("A maior idade registrada e: %hd anos \n", maiorIdadeRegistrada);
    printf("O percentual de pessoas com altura maior que 180 e de %f por cento: \n", alturaMaior180);
    
}