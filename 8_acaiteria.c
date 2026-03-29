#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int qp, qm, qg;
    float desconto, totalSemDesconto, totalFinal;

    printf("Quantidade de a�a�s pequenos: ");
    scanf("%d", &qp);

    printf("Quantidade de a�a�s m�dios: ");
    scanf("%d", &qm);

    printf("Quantidade de a�a�s grandes: ");
    scanf("%d", &qg);

    printf("Valor do cupom de desconto (%%): ");
    scanf("%f", &desconto);

    totalSemDesconto = (qp * 13.50) + (qm * 15.00) + (qg * 17.50);
    totalFinal = totalSemDesconto - (totalSemDesconto * (desconto / 100));

    printf("\nSeu pedido foi registrado.\n");
    printf("- A�a� P: %d\n", qp);
    printf("- A�a� M: %d\n", qm);
    printf("- A�a� G: %d\n\n", qg);

    printf("Desconto de %g%% aplicado.\n", desconto);
    printf("Total R$ %.2f\n", totalFinal);

    return 0;
}
