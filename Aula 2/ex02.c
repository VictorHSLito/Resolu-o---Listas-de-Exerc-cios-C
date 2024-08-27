#include <stdio.h>

int main() {
    int lados[3];
    printf("Digite 3 valores: ");
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &lados[i]);
        if (lados[i] <= 0) {
            printf("Valor invalido para lado!\n");
            return 1;
        }
    }

    if ((lados[0] + lados[1] > lados[2]) &&
        (lados[0] + lados[2] > lados[1]) &&
        (lados[1] + lados[2] > lados[0])) {

        if ((lados[0] == lados[1]) && (lados[1] == lados[2])) {
            printf("Triângulo equilátero\n");
        }
        else if ((lados[0] == lados[1]) || (lados[1] == lados[2]) || (lados[0] == lados[2])) {
            printf("Triângulo isósceles\n");
        }
        else {
            printf("Triângulo escaleno\n");
        }
    } else {
        printf("Os valores digitados não podem formar um triângulo.\n");
    }

    return 0;
}
