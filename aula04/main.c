#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float notas[3];
    float media;
} Aluno;

void mediaNotas(){
    int qtdAlunos;

    printf("\nQuantos alunos serao cadastrados? >");
    scanf("%i", &qtdAlunos);

    Aluno alunos[qtdAlunos];
    int qtdNotas = sizeof alunos[0].notas / sizeof * alunos[0].notas;

    for(int i = 0; i < sizeof alunos / sizeof * alunos; i++){
        printf("\nNome do aluno: ");
        scanf("%s", alunos[i].nome);
        for (int j = 0; j < qtdNotas; ++j) {
            printf("Digite a nota %i: ", j);
            scanf("%f", &alunos[i].notas[j]);
        }
        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / qtdNotas;
        printf("\nMedia do Aluno: %f", alunos[i].media);
    }
}

void arrayDinamico(){
    int* numbers = (int*)calloc(1, sizeof(int));

    if (numbers == NULL){
        printf("\nErro ao alocar memória!");
        return;
    }else{
        printf("\n Memoria alocada com sucesso!");
    }

    int iterador = 0;
    int continuar = 1;

    while(continuar){
        printf("\nTamanho do array: %i", iterador);
        printf("\nDigite o numero: ");
        scanf("%i", &numbers[iterador]);

        printf("\nContinuar? 1/0 >");
        scanf("%i", &continuar);

        if (continuar){
            iterador++;
            numbers = realloc(numbers, iterador * sizeof(int));
            printf("\nMemoria realocada");
        }
    }

    for(int i = 0; i <= iterador; i++){
        printf("%i - ", numbers[i]);
    }

    free(numbers);
}

int main() {
    //mediaNotas();
    //arrayDinamico();
    return 0;
}
