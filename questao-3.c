#include <stdio.h>

int main() {
    int senha, num;

    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);
    scanf("%d", &num);

        if (num == senha){
            printf("senha valida!\n");
        }
        else {
            while (num != senha){  
            printf("senha invalida!\n");
            scanf("%d", &num);
            }
            printf("senha valida!\n");
        }
    

    return 0;
}