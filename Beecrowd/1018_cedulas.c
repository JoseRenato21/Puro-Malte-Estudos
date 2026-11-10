#include <stdio.h>

/* Beecrowd 1018 - Cédulas: menor quantidade de notas para um valor em reais */
int main(void) {
    int valor;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &valor);
    printf("%d\n", valor);
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", valor / notas[i], notas[i]);
        valor %= notas[i];
    }
    return 0;
}
