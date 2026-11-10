#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Quantos números? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Valor inválido.\n");
        return 1;
    }

    /* malloc reserva memória no heap. Sempre confira se devolveu NULL. */
    int *v = malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Sem memória.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) v[i] = (i + 1) * (i + 1);

    printf("Quadrados: ");
    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");

    /* realloc muda o tamanho do bloco mantendo o conteúdo. */
    int *maior = realloc(v, 2 * n * sizeof(int));
    if (maior == NULL) {
        free(v);
        return 1;
    }
    v = maior;
    for (int i = n; i < 2 * n; i++) v[i] = (i + 1) * (i + 1);

    printf("Dobrando o vetor: ");
    for (int i = 0; i < 2 * n; i++) printf("%d ", v[i]);
    printf("\n");

    /* Tudo o que foi alocado precisa ser liberado. */
    free(v);
    return 0;
}
