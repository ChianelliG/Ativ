#include <stdio.h>

double conveter(double temperaturaF) {
    return (temperaturaF - 32.0) * (5.0 / 9.0);
}

int main() {
    double temperaturaF, temperaturaC;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &temperaturaF);

    temperaturaC = converter(temperaturaF);

    printf("Temperatura em Celsius: %.2lf\n", temperaturaC);

    return 0;
}
