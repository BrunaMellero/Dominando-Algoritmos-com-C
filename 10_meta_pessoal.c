#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char descricao[100];
    float valorMeta, salario, despesas;
    float saldo, reserva, valorMensal, prazo;

    printf("Descrição da meta: ");
    fgets(descricao, sizeof(descricao), stdin);
    descricao[strcspn(descricao, "\n")] = 0;

    printf("Valor necessário: ");
    scanf("%f", &valorMeta);

    printf("Salário mensal: ");
    scanf("%f", &salario);

    printf("Despesas mensais: ");
    scanf("%f", &despesas);

    saldo = salario - despesas;
    reserva = saldo * 0.30;
    valorMensal = saldo - reserva;
    prazo = valorMeta / valorMensal;

    printf("\nMeta: %s (R$ %.2f)\n", descricao, valorMeta);
    printf("Salário: R$ %.2f - Despesas: R$ %.2f\n\n", salario, despesas);

    printf("Saldo após despesas: R$ %.2f\n", saldo);
    printf("Reserva fixa (30%%): R$ %.2f\n", reserva);
    printf("Valor disponível para a meta: R$ %.2f por mês\n", valorMensal);
    printf("Prazo estimado para atingir a meta: %.2f meses\n", prazo);

    return 0;
}
