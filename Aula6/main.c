#include <stdio.h>

/* Exercício 1
 *1. Desenvolver um programa que leia 5 elementos de um vetor A. – No final, apresente:
 *a. A soma de todos os valores ímpares.
 *b. A soma de todos os valores pares.
 *c. A soma total.
 *d. E a porcentagem de números ímpares em relação aos pares
 *
*/

int isOdd(int value) {
    return value % 2 == 0;
}

void ex01(){
    int LIMIT = 5;
    int values[LIMIT];
    int sumOdd = 0, sumEven = 0, sumTotal = 0, countOdd = 0, countEven = 0;

    for(int i = 0; i < LIMIT; i++) {
        printf("\nDigite um valor numerico inteiro: >");
        scanf("%i", &values[i]);
        if (isOdd(values[i])){
            sumOdd += values[i];
            countOdd++;
        } else {
            sumEven += values[i];
            countEven++;
        }

        sumTotal += values[i];
    }

    double oddPercent = (double)countOdd / LIMIT;
    double evenPercent = (double)countEven / LIMIT;

    printf("\n*** DADOS ***");
    printf("\nValores inseridos: ");
    for(int i = 0; i < LIMIT; i++) {
        printf("%i (par? : %i); ", values[i], isOdd(values[i]));
    }
    printf("\n Total de valores impares: %i", countEven);
    printf("\n Total de valores pares: %i", countOdd);
    printf("\n Soma de valores impares: %i", sumEven);
    printf("\n Soma de valores pares: %i", sumOdd);
    printf("\n Soma total: %i", sumTotal);
    printf("\n Fatia correspondente aos impares: %.2lf %%", evenPercent * 100);
    printf("\n Fatia correspondente aos pares: %.2lf %%", oddPercent * 100);

}

/* Exercício 2
 * 2. Desenvolva um programa que faça a leitura de 10 valores no vetor A. Construir um
 *vetor B do mesmo tipo, observando a seguinte formatação:
 *a. Se o valor do índice for par, o valor deverá ser multiplicado por 5;
 *b. Se o valor do índice for ímpar, deverá ser somado com 5.
 *c. Ao final mostrar os conteúdos dos dois vetores invertidos (listar ao contrário).
*/

void printArray(int * arr, int isReverse, int size) {

    if (isReverse) {
        for(int i = size - 1; i >= 0; i--) {
            printf("%i;", arr[i]);
        }

        return;
    }

    for(int i = 0; i < size; i++) {
        printf("%i;", arr[i]);
    }

}

int mapValues(int index, int value) {
    if (isOdd(index)){
        return value * 5;
    }

    return value + 5;
}

void ex02() {
    int LIMIT = 10;
    int primaryValues[LIMIT];
    int secondaryValues[LIMIT];

    for(int i = 0; i < LIMIT; i++) {
        printf("\nDigite um valor numerico inteiro: > ");
        scanf("%i", &primaryValues[i]);
        secondaryValues[i] = mapValues(i, primaryValues[i]);
    }

    printf("\n*** VETOR A ***\n");
    printArray(primaryValues, 1, LIMIT);

    printf("\n*** VETOR B ***\n");
    printArray(secondaryValues, 1, LIMIT);
}

/* Exercício 3
 * Crie um programa que lê 10 valores inteiros e, em seguida, mostre na tela os valores
 * lidos na ordem inversa.
*/

void ex03() {
    int LIMIT = 10;
    int arr[LIMIT];

    for(int i = 0; i < LIMIT; i++) {
        printf("\nDigite um valor numerico inteiro: > ");
        scanf("%i", &arr[i]);
    }

    printArray(arr, 1, LIMIT);
}

/* Exercício 4
 * 4. Crie um programa que lê 10 valores inteiros pares e, em seguida, mostre na tela os
 * valores lidos na ordem inversa.
*/

void ex04() {
    int LIMIT = 10;
    int values[LIMIT];
    int counter = 0;

    while(counter < LIMIT){

        printf("\nDigite um valor numerico inteiro PAR: > ");
        scanf("%i", &values[counter]);

        if (!isOdd(values[counter])) {
            printf("\nValor inserido nao e par, tente novamente.");
            continue;
        }

        counter++;
    }

    printArray(values, 1, LIMIT);
}

/* Exercício 5
 *5. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
 * calcule e imprima a média geral.
*/

void ex05() {
    int LIMIT = 15;
    double values[LIMIT];
    double sum = 0;

    for(int i = 0; i < LIMIT; i++) {
        printf("\nDigite a nota da prova do aluno de numero %i : > ", i + 1);
        scanf("%lf", &values[i]);
        sum += values[i];
    }

    printf("\nMedia geral da sala: %.2lf", sum / LIMIT);
}

/* Exercício 6
 * Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
 * quantidade de números negativos e a soma dos números positivos desse vetor
*/

int isNegative(int value) {
    return value < 0;
}

void ex06() {
    int LIMIT = 10;
    double values[LIMIT];
    int negativeCount = 0;
    double positiveSum = 0;

    for(int i = 0; i < LIMIT; i++) {
        printf("\nDigite um valor numerico real: > ");
        scanf("%lf", &values[i]);
    }
}

int main() {
    //ex01();
    //ex02();
    //ex03();
    //ex04();
    //ex05();
    return 0;
}
