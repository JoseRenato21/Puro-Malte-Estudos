#include <stdio.h>

int main(void) {
    int nota;
    printf("Digite a nota (0 a 10): ");
    if (scanf("%d", &nota) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    if (nota < 0 || nota > 10) {
        printf("Nota fora do intervalo.\n");
    } else if (nota >= 7) {
        printf("Aprovado.\n");
    } else if (nota >= 4) {
        printf("Prova final.\n");
    } else {
        printf("Reprovado.\n");
    }
    return 0;
}
