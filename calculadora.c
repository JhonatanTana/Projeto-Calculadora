#include <stdio.h>

void main() {
    int escolha = 0;
    float num1, num2;

    while (escolha != 5) {
        printf("\nEscolha uma operacao:\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        scanf("%d", &escolha);

        if (escolha == 5) {
            printf("Ate logo!\n");
            break;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        switch (escolha) {
            case 1:
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Nao e possivel dividir por zero!\n");
                } else {
                    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                }
                break;
            default:
                printf("Operacao invalida!\n");
                break;
        }
    }
}