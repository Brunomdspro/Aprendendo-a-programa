#include <stdio.h>
 
int main(){
    int numero1, numero2;
    int soma, subtracao, multipicacao, divisao;

    printf ("entre com numero 1: \n");
    scanf ("%d", &numero1);

    printf ("entre com o numero 2: \n");
    scanf ("%d", &numero2);


    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multipicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("A soma e: %d\n", soma);
    printf("A subtraçao e: %d\n", subtracao);
    printf("A multiplicaçao e: %d\n", multipicacao);
    printf("A divisao e: %d\n", divisao);

}