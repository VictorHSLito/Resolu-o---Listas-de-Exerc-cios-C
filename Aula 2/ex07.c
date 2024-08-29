#include <stdio.h>

int main () {
    float velocidade_max, velo_moto;

    printf("Digite a velocidade maxima da via [km/h]: ");
    scanf("%f", &velocidade_max);
    printf("Qual a velocidade que estava o motorista? ");
    scanf("%f", &velo_moto);

    if (velo_moto <= velocidade_max) {
        printf("Nao ha multa");
    }
    else {
        printf("Multa de R$ %d.", ((int)velo_moto - (int)velocidade_max)*5);
    }
}