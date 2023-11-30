#include <stdio.h>
#include <locale.h>
#include <string.h>

float mediaStrings(char string1[100], char string2[100]){
    return ((float)strlen(string1) + strlen(string2)) / 2;
}

int main(){
    char string1[100], string2[100];
    float media;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a primeira string: \n");
    gets(string1);

    printf("Digite a segunda string: \n");
    gets(string2);
    
    media = mediaStrings(string1, string2);

    printf("A média das string é: %.2f", media);
}