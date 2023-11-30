#include <stdio.h>
#include <locale.h>

int fatorial(int num){
    int soma = num, cont;
    
    if(num == 0){ // 0! é igual a 1
        return 1;
    }
    
    for(cont = 1; cont < num; cont++){
        soma *= cont;
    }

    return soma;
}

int main(){
    int num, resultado;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite um número: \n");
    scanf("%d", &num);

    resultado = fatorial(num);

    printf("O fatorial de %d é: %d", num, resultado);
}