#include <stdio.h>

int main()
{
    int opc;
    float num1, num2;
    printf("Escolha uma operacao matematica:\n");
    printf("\t1: '+'\n\t2: '-'\n\t3: '*'\n\t4: '\\'\n");
    scanf("%d", &opc);
    printf("Agora digite os números: ");
    scanf("%f %f", &num1, &num2);

    switch (opc)
    {
    case 1:
        printf("A soma vale: %f", num1 + num2);
        break;
    case 2:
        printf("A subtracao vale: %f", num1 - num2);
        break;
    case 3:
        printf("A multiplicacao vale: %f", num1*num2);
        break;
    case 4:
        if (num2 != 0) {
            printf("A divisao vale: %f", num1/num2);
        }
        else {
            printf("Nao eh possivel dividir por 0");
        }
        break;
    default:
        break;
    }
    return 0;
}
