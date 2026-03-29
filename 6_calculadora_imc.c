#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char nome[100];
    float altura, peso, imc;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("%s, seu IMC � de %.4f\n", nome, imc);

    return 0;
}
