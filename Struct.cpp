#include <stdio.h>

#define MAX_BANDAS 5
#define MAX_NOME 50
#define MAX_TIPO 30

typedef struct {
    char nome[MAX_NOME];        //Nome da banda
    char tipoMusica[MAX_TIPO];  //Tipo de música que a banda toca
    int numIntegrantes;         //Número de integrantes
    int ranking;                //Posição no ranking
} Banda;

int main() {
    Banda bandas[MAX_BANDAS];       //Armazenar as bandas

    for (int i = 0; i < MAX_BANDAS; i++) {      //Cadastro de Bandas
        printf("Cadastro da Banda %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", bandas[i].nome);
        printf("Tipo de Musica: ");
        scanf(" %[^\n]", bandas[i].tipoMusica);
        printf("Numero de Integrantes: ");
        scanf("%d", &bandas[i].numIntegrantes);
        printf("Ranking (1 a 5): ");
        scanf("%d", &bandas[i].ranking);
        printf("\n");
    }

    printf("Dados das Bandas:\n");      //Exibe os dados armazenados das bandas
    for (int i = 0; i < MAX_BANDAS; i++) {
        printf("Banda %d:\n", i + 1);
        printf("Nome: %s\n", bandas[i].nome);
        printf("Tipo de Musica: %s\n", bandas[i].tipoMusica);
        printf("Numero de Integrantes: %d\n", bandas[i].numIntegrantes);
        printf("Ranking: %d\n\n", bandas[i].ranking);
    }

    return 0;
}