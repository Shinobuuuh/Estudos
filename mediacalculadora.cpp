#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    // Exibindo as opções para o usuário
    printf("Selecione a operação (+, -, *, /): ");
    scanf(" %c", &operador);

    // Pedindo os números para a operação
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    // Realizando a operação baseada na escolha do usuário
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("Erro! Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operador inválido!\n");
            break;
    }

    return 0;
}
