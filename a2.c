#include <stdio.h>

void imprimirMesEQuantidadeDias(int numero) {
    if (numero >= 1 && numero <= 12) {
        char *nomesMeses[] = {
            "Janeiro", "Fevereiro", "Marco", "Abril",
            "Maio", "Junho", "Julho", "Agosto",
            "Setembro", "Outubro", "Novembro", "Dezembro"
        };

        int diasPorMes[] = {
            31, 28, 31, 30,
            31, 30, 31, 31,
            30, 31, 30, 31
        };

        printf("Mes: %s\n", nomesMeses[numero - 1]);
        printf("Quantidade de dias: %d\n", diasPorMes[numero - 1]);
    } else {
        printf("Tente novamente.\n");
    }
}

int main() {
    int numeroMes;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &numeroMes);

    imprimirMesEQuantidadeDias(numeroMes);

    return 0;
}
