#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char nome[100];
    float valorCompra, porcentagem, totalFinal;

    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);
    printf("Digite a porcentagem de desconto: ");
    scanf("%f", &porcentagem);

    totalFinal = valorCompra - (valorCompra * (porcentagem / 100));

    printf("Ol� %s, sua compra de R$ %.2f foi confirmada!\n", nome, valorCompra);
    printf("Foi aplicado um desconto de %g%%.\n", porcentagem);
    printf("O total final ficou em R$ %.2f\n", totalFinal);

    return 0;
}
