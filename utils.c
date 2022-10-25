#include <stdio.h>

void outputMenu(char ** words, int size){
    for(int i = 0; i < size; i++){
        printf("\n[%i] - [%s]", i + 1, words[i]);
    }
    printf("\nDigite sua resposta: >");
}

int main() {
    char * words[] = {
        "Item1",
        "Item2",
        "Item3"
    };
    
    outputMenu(words, 3);

    return 0;
}
