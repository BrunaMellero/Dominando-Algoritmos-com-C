#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float pistaMetros, tempoPrimeiraVolta;
    int voltas;
    float distanciaTotalKm, tempoTotalMinutos;

    printf("Tamanho da pista (metros): ");
    scanf("%f", &pistaMetros);

    printf("Quantidade de voltas: ");
    scanf("%d", &voltas);

    printf("Tempo da primeira volta (segundos): ");
    scanf("%f", &tempoPrimeiraVolta);

    distanciaTotalKm = (pistaMetros * voltas) / 1000.0;
    tempoTotalMinutos = (tempoPrimeiraVolta * voltas) / 60.0;

    printf("\nAn�lise Preditiva Conclu�da\n");
    printf("--\n");
    printf("Dist�ncia total a ser percorrida: %.2f km.\n", distanciaTotalKm);
    printf("Previs�o de conclus�o: %.1f minutos.\n", tempoTotalMinutos);

    return 0;
}
