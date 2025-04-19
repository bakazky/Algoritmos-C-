#include <stdio.h>
int main() {
    int matricula[10], novamat, i, j, existente;

    for (i = 0; i < 10; i++) {      //inserção  de novas matrículas
        printf("Insira a matricula do aluno %d: ", i + 1);
        scanf("%d", &novamat);

        existente = 0;
        for (j = 0; j < i; j++) {       //Testa para ver se existe outra matrícula igual
            if (matricula[j] == novamat) {
                existente = 1;  
                break;
            }
        }

        if (existente) {        //Caso a matrícula se repita
            printf("Essa Matricula ja foi inserida. Tente novamente.\n");
            i--; 

        } else {        //Caso a matrícula não se repita
            matricula[i] = novamat;
            printf("Matricula adicionada com sucesso.\n");
        }
    }
    
    printf("As 10 matriculas inseridas: [");        //Irá escrever as matrículas num vetor com 10 espaços, 9 vírgulas e entre colchetes
    for (i = 0; i < 10; i++) {
        printf("%d", matricula[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    
    printf("]\n");
    return 0;
}