#include <stdio.h>

int main() {
    float x, y, z, maior, menor, intermediario;

    printf("Digite 3 numeros: ");
    scanf("%f %f %f", &x, &y, &z);

    // Encontrando o maior número
    if (x >= y && x >= z) {
        maior = x;
    } else if (y >= x && y >= z) {
        maior = y;
    } else {
        maior = z;
    }

    // Encontrando o menor número
    if (x <= y && x <= z) {
        menor = x;
    } else if (y <= x && y <= z) {
        menor = y;
    } else {
        menor = z;
    }

    // Encontrando o número intermediário
    if ((x > menor && x < maior) || (x < menor && x > maior)) {
        intermediario = x;
    } else if ((y > menor && y < maior) || (y < menor && y > maior)) {
        intermediario = y;
    } else {
        intermediario = z;
    }

    printf("Maior: %f\nMenor: %f\nIntermediario: %f\n", maior, menor, intermediario);

    return 0;
}
