#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    int idade = 20;
    long populacao = 8000000000L;
    float altura = 1.75f;
    double pi = 3.141592653589793;
    char inicial = 'J';

    printf("int:    %d (%zu bytes)\n", idade, sizeof(int));
    printf("long:   %ld (%zu bytes)\n", populacao, sizeof(long));
    printf("float:  %.2f (%zu bytes)\n", altura, sizeof(float));
    printf("double: %.10f (%zu bytes)\n", pi, sizeof(double));
    printf("char:   %c, código ASCII %d\n", inicial, inicial);

    printf("\nLimites desta máquina\n");
    printf("INT_MAX = %d\n", INT_MAX);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("FLT_MAX = %e\n", FLT_MAX);

    /* Conversão explícita (cast): sem ela, 7 / 2 é divisão inteira. */
    int a = 7, b = 2;
    printf("\n7 / 2 inteiro = %d\n", a / b);
    printf("7 / 2 com cast = %.2f\n", (double)a / b);

    /* Constantes não podem ser alteradas depois de definidas. */
    const double G = 9.80665;
    printf("g = %.5f m/s^2\n", G);
    return 0;
}
