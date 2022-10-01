#include <stdio.h>

//Funções em C
void printLine(char character, int quantity) {
    for(int i = 0; i < quantity; i++) {
        printf("%c", character);
    }
}

int main() {

    printLine('*', 10);
    printLine(':', 6);

    return 0;
}