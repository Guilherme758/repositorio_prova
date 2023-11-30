#include <stdio.h>
#include <locale.h>

int calculaNumeros(int num1, int num2){
    if(num1 < num2){
        return num1 + num2;
    }
    else if(num1 == num2){
        return num1 * num2;
    }
    else{
        return num1 - num2;
    }
}

int main(){
    int num1, num2, resultado;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);

    printf("Digite o segundo número: \n");
    scanf("%d", &num2);

    resultado = calculaNumeros(num1, num2);

    printf("O resultado é: %d", resultado);
}