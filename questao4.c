#include <stdio.h>
#include <locale.h>
#include <string.h>

float mediaStrings(char strings[5][100]){
    int soma = 0, cont;

    for(cont = 0; cont < 5; cont++){
        soma += strlen(strings[cont]);
    }

    return (float)soma / 5;
}

int main(){
    char strings[5][100];
    float media;
    int cont;

    setlocale(LC_ALL, "Portuguese");

    for(cont = 0; cont < 5; cont++){
        strings[cont][0] = '\0';

        printf("Digite uma string: \n");
        gets(strings[cont]);
        fflush(stdin);
    }
    
    media = mediaStrings(strings);

    printf("A média das strings é: %.2f", media);
}