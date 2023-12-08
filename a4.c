#include <stdio.h>
#include <math.h>

#define PI 3.14159265

double calcularVC(double altura, double raio) {
    return PI * pow(raio, 2) * altura;
}

int main() {
    double altura, raio, volumeC;

    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    volumeC = calcularVC(altura, raio);

    printf("Volume do cilindro: %.2lf\n", volumeC);

    return 0;
}
