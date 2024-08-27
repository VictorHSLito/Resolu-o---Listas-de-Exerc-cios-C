#include <stdio.h>

#define SIZE 3

int main () {
    int valores[SIZE];
    float media = 0;

    printf("Digite 3 valores: ");
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &valores[i]);
        media += valores[i];
    }
    
    printf("A media dos valores digitados equivale a %f", media/SIZE);
    return 0;
}