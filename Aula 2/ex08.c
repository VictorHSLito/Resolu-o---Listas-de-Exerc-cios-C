#include <stdio.h>

int main () {
    int numero, ano;
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &numero);
    printf("Agora digite o ano: ");
    scanf("%d", &ano);

    if (ano < 0 || numero < 0 || numero > 12) {
        printf("Ano ou numero invalido!");
        return -1;
    }

    switch (numero)
    {
    case 1:
        printf("O mes de Janeiro tem 31 dias");
        break;
    case 2:
        if (ano % 4 == 0) {
            printf("O mes de fevereiro tem 29 dias");
            break;
        }
        else {
            printf("O mes de fevereiro tem 28 dias");
            break;
        }        
    case 3:
        printf("O mes de Março tem 31 dias");
        break;
    case 4:
        printf("O mes de Abril tem 30 dias");
        break;
    case 5:
        printf("O mes de Maio tem 31 dias");
        break;
    case 6:
        printf("O mes de Junho tem 30 dias");
        break;
    case 7:
        printf("O mes de Julho tem 31 dias");
        break;
    case 8:
        printf("O mes de Agosto tem 31 dias");
        break;
    case 9:
        printf("O mes de Setembro tem 30 dias");
        break;
    case 10:
        printf("O mes de Outubro tem 31 dias");
        break;
    case 11:
        printf("O mes de Novembro tem 30 dias");
        break;
    case 12:
        printf("O mes de Dezembro tem 31 dias");
        break;
    default:
        printf("Nao foi digitado um numero valido!");
        break;
    }
}