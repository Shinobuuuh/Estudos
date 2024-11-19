#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    // Exibindo as op��es para o usu�rio
    printf("Selecione a opera��o (+, -, *, /): ");
    scanf(" %c", &operador);

    // Pedindo os n�meros para a opera��o
    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%lf", &num2);

    // Realizando a opera��o baseada na escolha do usu�rio
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
                printf("Erro! Divis�o por zero n�o � permitida.\n");
            }
            break;
        default:
            printf("Operador inv�lido!\n");
            break;
    }

    return 0;
}
