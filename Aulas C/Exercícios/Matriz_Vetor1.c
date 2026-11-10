
#include <stdio.h>
int exemplo_1(void){
    int A[6], var;
        var = 0;

            A[0] = 1;
            A[1] = 0;
            A[2] = 5;
            A[3] = -2;
            A[4] = -5;
            A[5] = 7;
        var = A[0] + A[1] + A[5];
        printf("%d + %d + %d = %d\n", A[0], A[1], A[5], var);
            A[4] = 100;
        for(int i =0; i < 6; i++){
            printf("A[%d] = %d\n", i, A[i]);
        }
    return 0;
}

// ---------------------------------------
// em 2) Programa que lê quantos valores pares um vetor x possui.
  #include <stdio.h>
    int exemplo_2(void){
        int a = 1, x;
        printf("Escolha um número para criar um vetor numérico crescente correspoondente com o valor citado.\n");
        scanf("%d", &x);
        int vet[x];
        for(int j = 0; j < x;j++){
            vet[j] = a;
            a = a + a + a;
        }
        for(int i = 0; i < x; i++){
            printf("vet[%d] = %d\n", i, vet[i]);
        }
        return 0;
    }

/* Executa os exemplos acima, na ordem em que aparecem no arquivo. */
int main(void) {
    exemplo_1();
    printf("\n-----\n");
    exemplo_2();
    printf("\n-----\n");
    return 0;
}
