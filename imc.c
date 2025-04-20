#include <stdio.h>
int main(){
    float altura, peso, imc, alt;
    
    printf("Insira sua altura em cm ou m\n");      //Inserção de Dados
    scanf("%f",&altura);
    printf("Insira seu peso em KGs\n");
    scanf("%f",&peso);

    if (altura>10)      //Verificação se o a inserção foi em cm ou m. Cálculo do imc
        {alt=altura/100;
        imc=peso/(alt*alt);}
    
    else 
        {imc=peso/(altura*altura);}

    if (imc<=18.4)      //Separação que classifica o seu imc
        {printf("Abaixo do peso. Seu imc: ""%f",imc);}
    else if ((imc>=18.5) && (imc<=24.9))
        {printf("Peso normal. Seu imc: ""%f",imc);}
    else if ((imc>=25) && (imc<=29.9))
        {printf("Acima do peso. Seu imc: ""%f",imc);}
    else if ((imc>=30) && (imc<=34.9))
        {printf("Obesidade grau I. Seu imc: ""%f",imc);}
    else if ((imc>=35) && (imc<=39.9))
        {printf("Obesidade grau II. Seu imc: ""%f",imc);}
    else 
        {printf("Obesidade grau III. Seu imc: ""%f",imc);}
}