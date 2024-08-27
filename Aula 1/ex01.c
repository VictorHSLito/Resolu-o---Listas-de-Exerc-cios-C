#include <stdio.h>

int main () {
    int segundos;
    printf("Digite um valor em segundos: ");
    scanf("%d", &segundos);

    printf("Esse valor corresponde a %f minutos\n%f em horas\nE %d em segundos", (float)segundos/60, (float)segundos/(60*60), segundos);
    return 0;
}