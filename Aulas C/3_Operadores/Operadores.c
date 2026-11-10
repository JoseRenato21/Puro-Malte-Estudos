#include <stdio.h>

int main(void) {
    int a = 17, b = 5;

    printf("Aritméticos\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d (divisão inteira)\n", a, b, a / b);
    printf("%d %% %d = %d (resto)\n", a, b, a % b);

    printf("\nIncremento\n");
    int i = 5;
    printf("i++ devolve %d e depois i vale %d\n", i++, i);
    printf("++i devolve %d\n", ++i);

    printf("\nRelacionais e lógicos (1 = verdadeiro, 0 = falso)\n");
    printf("a > b            -> %d\n", a > b);
    printf("a == b           -> %d\n", a == b);
    printf("a > 10 && b < 3  -> %d\n", a > 10 && b < 3);
    printf("a > 10 || b < 3  -> %d\n", a > 10 || b < 3);
    printf("!(a > b)         -> %d\n", !(a > b));

    printf("\nAtribuição composta\n");
    int x = 10;
    x += 5; printf("x += 5  -> %d\n", x);
    x *= 2; printf("x *= 2  -> %d\n", x);
    x %= 7; printf("x %%= 7  -> %d\n", x);

    printf("\nOperador ternário\n");
    printf("maior entre %d e %d: %d\n", a, b, a > b ? a : b);
    return 0;
}
