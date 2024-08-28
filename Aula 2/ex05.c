#include <stdio.h>

int main()
{
    int notas[2];
    float media;

    printf("Digite as notas do aluno: ");
    for (int i = 0; i < 2; i++) {
        scanf("%d", &notas[i]);
        media += notas[i];
    }
    media = media/2;

    if (media >= 70 && media <= 100) {
        printf("Aprovado");
    }
    else if (media>= 40 && media < 70) {
        printf("Em exame final\n");
        int exame;
        printf("Qual a nota do exame final?\n");
        scanf("%d", &exame);
        media = (media + exame);
        if (media >= 100) {
            printf("Aprovado");
        }
        else {
            printf("Reprovado");
        }
    }
    else {
        printf("Reprovado");
    }
    return 0;
}
