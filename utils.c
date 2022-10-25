void outputMenu(char ** words, int size){
    for(int i = 0; i < size; i++){
        printf("\n[%i] - [%s]", i + 1, words[i]);
    }
    printf("\nDigite sua resposta: >");
}

//Palavras para o menu;
char * words[] = {
    "Item1",
    "Item2",
    "Item3"
};
    
//Menu
outputMenu(words, 3);
