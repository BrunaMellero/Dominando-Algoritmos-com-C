#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int pessoas;
    float q_carne, q_linguica, q_frango;
    float c_carne, c_linguica, c_frango, total_churrasco, por_pessoa;

    printf("Quantas pessoas v�o no churrasco?");
    scanf("%d", &pessoas);

    q_carne = pessoas * 0.3;
    q_linguica = pessoas * 0.2;
    q_frango = pessoas * 0.15;

    c_carne = q_carne * 50.00;
    c_linguica = q_linguica * 28.00;
    c_frango = q_frango * 22.00;

    total_churrasco = c_carne + c_linguica + c_frango;
    por_pessoa = total_churrasco / (float)pessoas;

    printf("Quantidades:\n");
    printf("Carne: %.1f kg - Lingui�a: %.1f kg - Frango: %.1f kg\n\n", q_carne, q_linguica, q_frango);

    printf("Custo total:\n");
    printf("Carne: R$ %.2f - Lingui�a: R$ %.2f - Frango: R$ %.2f\n\n", c_carne, c_linguica, c_frango);

    printf("Custo total do churrasco: R$ %.2f\n", total_churrasco);
    printf("Cada pessoa deve contribuir com: R$ %.2f\n", por_pessoa);

    return 0;
}
