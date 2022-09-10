#include <stdio.h>
#include <stdlib.h>

void esquentaAula(){
    int values[10];
    int sum = 0;

//    Coletando dados e computando a soma
    for(int i = 0; i < 10; i++){
        printf("\nDigite o valor %i: ", i+1);
        scanf("%i", &values[i]);
        sum += values[i];
    }

    double result = (double)sum / 10;

//    Imprimindo os valores abaixo da média
    for(int i = 0; i < 10; i++){
        if ((double)values[i] < result){
            printf("\n Valor %i, de posicao (%i) esta abaixo da media (%.2f)", values[i], i, result);
        }
    }

}

void numerosPrimos(){
    int number = 1;
    int keepDoing = 1;
    int isPrime = 0;
    int counter = 0; //Contador de resto para quando o resto for 0
    int primeCounter = 0;

    printf("\nNumeros primos");

    while(keepDoing){

        if(primeCounter == 100){
            keepDoing = 0;
        }

        counter = 0;

        //2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37
        for (int i = 2; i <= number; i++){
            if (number % i == 0){
                counter++;
            }
        }

        isPrime = counter == 1;

        if (isPrime){
            printf("\n%i", number);
            primeCounter++;
        }

        number++;
    }
}

int main(){

    //esquentaAula();
    numerosPrimos();
    return 0;
}