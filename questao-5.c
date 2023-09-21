#include <stdio.h>

int main() {
        int num1, num2, maior,menor;

        scanf("%d", &num1);
        scanf("%d", &num2);

        if (num1 == num2){
            printf("Os valores lidos sao iguais\n");
        }

        else{

            if(num1 > num2){
                printf("%d eh maior que %d\n", num1, num2);
                maior = num1;
                menor = num2;
            }
            else{
                printf("%d eh maior que %d\n", num2, num1);
                maior = num2;
                menor = num1;
            }

            if(maior % menor != 0){
                printf("%d nao eh multiplo de %d\n", maior, menor);
            }
            else{
                printf("%d eh multiplo de %d\n", maior, menor);
            }
        }


    return 0;
}