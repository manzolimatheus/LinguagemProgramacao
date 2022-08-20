#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 1000
#define GUESSES 10

void checkIfNumberIsCloseToRandomNumber(int * guess, int * number){

    if (*guess > *number){
        printf("\n[ O numero sorteado e menor! ]");
    }else if (*guess < *number){
        printf("\n[ O numero sorteado e maior! ]");
    }else{
        printf("\n[ *** Parabens, voce acertou! *** ]");
    }
}

void numberGuesser(){
    srand(time(NULL));

    int randomNumber = rand() % MAX_NUMBER;
    int guess;

    //printf("\nNumero gerado: %i", randomNumber);
    printf("\n[ *** VOCE TEM %i CHANCES! *** ]", GUESSES);

    for(int i = GUESSES; i > 0; i--){
        printf("\n[ CHANCES RESTANTES : [%i] ]", i);
        printf("\n[ Qual seu palpite? ]");
        printf("\n> ");
        scanf("%i", &guess);
        checkIfNumberIsCloseToRandomNumber(&guess, &randomNumber);
        if (guess == randomNumber){break;}
    }

    printf("\n[ O jogo acabou! ]");

}

int main() {
    numberGuesser();

    return 0;
}
