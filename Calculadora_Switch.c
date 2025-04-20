#include<stdio.h>
int main(void){
    float n1, n2, resultado;
    int op;

    printf("Insira 1 para soma, 2 para subtracao, 3 para multiplicacao, 4 para divisao:\n");        //Escolha do cálculo e inserção de dados
    scanf("%d", &op);   
    printf("Insira um numero para o calculo:\n");
    scanf("%f", &n1);
    printf("Insira um segundo numero para o calculo:\n");
    scanf("%f", &n2);

    switch (op){        //trabalha com os diferentes cálculos e imprime os resultados
        case 1:
            printf("Voce escolheu soma\n");
            resultado = n1 + n2;
            printf("O resultado sera:\n""%.2f", resultado); 
        break;
        case 2:
            printf("Voce escolheu subtracao\n");
            resultado = n1 - n2;
            printf("O resultado sera:\n""%.2f", resultado);
        break;
        case 3:
            printf("Voce escolheu multiplicacao\n");
            resultado = n1 * n2;
            printf("O resultado sera:\n""%.2f", resultado);
        break;
        case 4:
            printf("Voce escolheu divisao\n");  
            resultado = n1 / n2;
            printf("O resultado sera:\n""%.2f", resultado);
        break;
        default:
            printf("Numero invalido\n");
    }

    return 0;
}
