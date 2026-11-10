#include <stdio.h>

int main(void) {
    const char *nome = "notas.txt";

    /* "w" cria o arquivo (ou apaga o conteúdo anterior). */
    FILE *f = fopen(nome, "w");
    if (f == NULL) {
        perror("fopen");
        return 1;
    }
    fprintf(f, "Ana 9.5\n");
    fprintf(f, "Bruno 7.0\n");
    fprintf(f, "Carla 8.25\n");
    fclose(f);

    /* "r" abre para leitura. fscanf devolve quantos campos leu. */
    f = fopen(nome, "r");
    if (f == NULL) {
        perror("fopen");
        return 1;
    }
    char aluno[32];
    float nota, soma = 0;
    int total = 0;
    while (fscanf(f, "%31s %f", aluno, &nota) == 2) {
        printf("%-8s %.2f\n", aluno, nota);
        soma += nota;
        total++;
    }
    fclose(f);

    if (total > 0) printf("Média: %.2f\n", soma / total);
    remove(nome);
    return 0;
}
