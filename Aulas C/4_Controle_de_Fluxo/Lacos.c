#include <stdio.h>

int main(void) {
    printf("for: tabuada do 7\n");
    for (int i = 1; i <= 10; i++) {
        printf("7 x %2d = %2d\n", i, 7 * i);
    }

    printf("\nwhile: soma até passar de 20\n");
    int soma = 0, n = 1;
    while (soma <= 20) {
        soma += n;
        n++;
    }
    printf("soma = %d após %d termos\n", soma, n - 1);

    printf("\ndo-while: executa ao menos uma vez\n");
    int k = 10;
    do {
        printf("k = %d\n", k);
        k++;
    } while (k < 10);

    printf("\nbreak e continue: ímpares até 9\n");
    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0) continue;
        if (i > 9) break;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
