#include <stdio.h>

int main() {
    int numero;

    // Vetores com as representações dos números por extenso
    const char *unidades[] = {"zero", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    const char *especiais[] = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
    const char *dezenas[] = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};

    // Solicita o número ao usuário
    printf("Digite um numero entre 0 e 99: ");
    scanf("%d", &numero);

    // Verifica se o número está fora do intervalo permitido
    if (numero < 0 || numero > 99) {
        printf("Numero invalido\n");
    } else if (numero < 10) {
        // Exibe o número por extenso para 0-9
        printf("%s\n", unidades[numero]);
    } else if (numero < 20) {
        // Exibe o número por extenso para 10-19
        printf("%s\n", especiais[numero - 10]);
    } else {
        // Exibe o número por extenso para 20-99
        int unidade = numero % 10;
        int dezena = numero / 10;
        if (unidade == 0) {
            printf("%s\n", dezenas[dezena]);
        } else {
            printf("%s e %s\n", dezenas[dezena], unidades[unidade]);
        }
    }

    return 0;
}
