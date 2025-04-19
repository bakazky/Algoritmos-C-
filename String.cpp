#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char nome[100];
    int letras = 0;

    printf("Digite um nome sem acentos: ");     //Pede a entrada de um nome
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';       //Anula o \n inserido pelo fgets quando o usuário utiliza a tecla Enter

    for (int i = 0; nome[i] != '\0'; i++) {     //Calcula o comprimento do nome e anula os epaços
        if (isalpha(nome[i])) {
            letras++;
        }
    }

    printf("O nome %s possui %d letras.", nome, letras);      //Mostra o comprimento do nome

    return 0;

}