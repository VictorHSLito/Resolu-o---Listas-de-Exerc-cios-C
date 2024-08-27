#include <stdio.h>
#include <math.h>

#define GRAVIDADE 9.81 // Aceleração da gravidade em m/s²

int main() {
    double altura_inicial, velocidade_inicial, angulo_graus;
    double angulo_radianos, v_x, v_y;
    double tempo_voo, alcance;

    // a. Receber do usuário a altura, a velocidade inicial e o ângulo de lançamento
    printf("Digite a altura inicial do projétil em metros: ");
    scanf("%lf", &altura_inicial);
    printf("Digite a velocidade inicial do projétil em m/s: ");
    scanf("%lf", &velocidade_inicial);
    printf("Digite o ângulo de lançamento em graus: ");
    scanf("%lf", &angulo_graus);

    // Converter o ângulo de graus para radianos
    angulo_radianos = angulo_graus * M_PI / 180.0;

    // Calcular os componentes da velocidade inicial
    v_x = velocidade_inicial * cos(angulo_radianos);
    v_y = velocidade_inicial * sin(angulo_radianos);

    // Calcular o tempo de voo usando a fórmula quadrática
    // t = (-v_y ± sqrt(v_y² + 2 * g * altura_inicial)) / g
    double discriminante = v_y * v_y + 2 * GRAVIDADE * altura_inicial;
    
    if (discriminante < 0) {
        printf("O projétil nunca atinge o solo.\n");
        return 1;
    }

    double tempo_voo1 = (-v_y + sqrt(discriminante)) / GRAVIDADE;
    double tempo_voo2 = (-v_y - sqrt(discriminante)) / GRAVIDADE;
    
    // Precisamos do maior valor positivo de tempo
    tempo_voo = (tempo_voo1 > tempo_voo2) ? tempo_voo1 : tempo_voo2;

    // b. Calcular a distância horizontal (alcance)
    alcance = v_x * tempo_voo;

    // Mostrar o resultado
    printf("O projétil atingirá o chão a uma distância de %.2f metros.\n", alcance);

    return 0;
}
