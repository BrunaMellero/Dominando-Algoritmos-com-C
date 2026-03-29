#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char nome[100];
    char livro[100];
    int paginas;
    float segundosPorPagina, totalHoras;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite o nome do livro: ");
    fgets(livro, sizeof(livro), stdin);
    livro[strcspn(livro, "\n")] = 0;

    printf("Digite a quantidade de paginas: ");
    scanf("%d", &paginas);
    printf("Quantos segundos voc� demora para ler uma pagina: ");
    scanf("%f", &segundosPorPagina);

    totalHoras = (paginas * segundosPorPagina) / 3600;

    printf("%s, voc� finalizar� a leitura do livro %s em aproximadamente %.2f horas.\n", nome, livro, totalHoras);

    return 0;
}
