#include <stdio.h>
#include <math.h>

#define PI 3.14159265

double calcularVolume(double raio) {
    return (4.0 / 3.0) * PI * pow(raio, 3);
}

int main() {
    double raio, volumeEsfera;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volumeEsfera = calcularVolume(raio);

    printf("Volume da esfera: %.2lf\n", volumeEsfera);

    return 0;
}
