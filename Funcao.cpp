#include <stdio.h>
int verificarValor(int numero) {        //Função que separa números em maiores que 0, 0 e menores que 0
    if (numero > 0) {
        return 1; 
    } else if (numero < 0) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Digite um numero inteiro: ");       //Entrada do número
    scanf("%d", &num);

    int resultado = verificarValor(num);        //Chama a função e diz se o número é positivo, negativo ou igual a zero
    if (resultado == 1) {
        printf("O numero %d e positivo.\n", num);
    } else if (resultado == -1) {
        printf("O numero %d e negativo.\n", num);
    } else {
        printf("O numero e zero.\n");
    }

    return 0;
}