#include <stdio.h>

int main() {
    int num;
    int soma = 0;
    


    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);


    if (num % 2 == 0) {
        printf("%d eh par\n", num);
    } else {
        printf("%d eh impar\n", num);
    }
   
    int numero = num;

    while (numero > 0) {
        soma += numero % 10; 
        numero /= 10; 
    }

    printf("A soma dos algorismos de %d eh %d\n",num, soma);

    return 0;
}