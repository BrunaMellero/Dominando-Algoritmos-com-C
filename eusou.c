#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "");

    char nome[100];
    char curso[100];
    char semestre[100];
    char hobby[100];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite seu curso: ");
    fgets(curso, sizeof(curso), stdin);
    curso[strcspn(curso, "\n")] = 0; 

    printf("Qual semestre você está?: ");
    fgets(semestre, sizeof(semestre), stdin);
    semestre[strcspn(semestre, "\n")] = 0;

    printf("Qual é o seu hobby?: ");
    fgets(hobby, sizeof(hobby), stdin); 
    hobby[strcspn(hobby, "\n")] = 0;  

    printf("Prazer, eu sou o(a) %s!\n", nome);
    printf("Atualmente estou no %s semestre de %s e meu hobby favorito é %s.\n", semestre, curso, hobby);

    return 0;
}
