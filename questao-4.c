#include <stdio.h>

int main() {
    char exp;
    float porcentagem, novoSalario , salario;

        scanf("%c", &exp);
        scanf("%f", &salario);

        if (exp == 'a'){
            porcentagem = salario * 105;
            novoSalario = porcentagem / 100;
            printf("R$ %.2f\n", novoSalario);
        }

         else if (exp == 'b'){
            porcentagem = salario * 107;
            novoSalario = porcentagem / 100;
            printf("R$ %.2f\n", novoSalario);
        }

        else if (exp == 'c'){
            porcentagem = salario * 108;
            novoSalario = porcentagem / 100;
            printf("R$ %.2f\n", novoSalario);
        }

        



    return 0;
}
