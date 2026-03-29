#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float valorReal, valorDolar;
    float cotacao = 5.42;

    printf("Digite o valor em reais: ");
    scanf("%f", &valorReal);

    valorDolar = valorReal / cotacao;

    printf("Valor em real R$ %.0f.\n", valorReal);
    printf("Valor em d�lar $ %.2f.\n", valorDolar);

    return 0;
}
