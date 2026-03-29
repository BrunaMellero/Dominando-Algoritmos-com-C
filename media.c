#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "");

    char nome[100];
    float n1, n2, n3, media;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite sua nota 1: ");
    scanf("%f", &n1);
    printf("Digite sua nota 2: ");
    scanf("%f", &n2);
    printf("Digite sua nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("O(A) estudante %s ficou com m�dia %.1f\n", nome, media);

    return 0;
}
