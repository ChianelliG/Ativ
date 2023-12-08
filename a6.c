#include <stdio.h>

double calcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    double peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%lf", &peso);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    imc = calcularIMC(peso, altura);

    printf("IMC: %.2lf\n", imc);

    return 0;
}
