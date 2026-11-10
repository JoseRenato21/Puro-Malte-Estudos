#include <stdio.h>

/* Beecrowd 1008 - Salário: número do funcionário, horas trabalhadas e valor por hora */
int main(void) {
    int numero;
    double horas, valor_hora;
    scanf("%d %lf %lf", &numero, &horas, &valor_hora);
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", horas * valor_hora);
    return 0;
}
