#include <stdio.h>
#include <locale.h>
#include <string.h>

int verificaPalindromo(char string[200]){
    char string_aux1[200], string_aux2[200];
    int cont, cont_aux1 = 0, cont_aux2 = 0;

    string_aux1[0] = '\0';
    string_aux2[0] = '\0';

    for(cont = 0; cont < strlen(string); cont++){
        if(string[cont] != ' '){
            string_aux1[cont_aux1] = string[cont];
            cont_aux1++;
        }
    }

    string_aux1[cont_aux1] = '\0';
    
    for(cont = strlen(string); cont >= 0; cont--){
        if(string[cont] != '\0' && string[cont] != ' '){
            string_aux2[cont_aux2] = string[cont];
            cont_aux2++;
        }
    }

    string_aux2[cont_aux2] = '\0';

    return strcmp(string_aux1, string_aux2);
}

int main(){
    char string[200];
    int resultado;

    string[0] = '\0';

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a string: \n");
    gets(string);

    resultado = verificaPalindromo(string);

    if(resultado == 0){
        printf("A palavra é palindroma");
    }
    else{
        printf("A palavra não é palindroma");
    }
}