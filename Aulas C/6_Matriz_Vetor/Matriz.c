#include <stdio.h>
/*                  MATRIZES
    __Arrays Multi-dimensionais (Ex: 2x4, 5x3)


EX:  char nome[3][50]; (posso colocar 3 nomes com até 50 caracteres).


__Array unidimensional(VETOR):  int numeros[5] = [0][1][2][3][4]

__Array multidimensional(MATRIZ): int numeros[5][5] [linhas]x[colunas]

     int numeros[5][5] = [0][1][2][3][4]-0   
                         [0][1][2][3][4]-1
                         [0][1][2][3][4]-2
                         [0][1][2][3][4]-3
                         [0][1][2][3][4]-4
*/

int exemplo_1(void){
// Vetores e strings
    char nome[3][50];
    for(int i = 0; i < 3; i++){
    printf("Qual seu nome? ");
    gets(nome[i]);
    }
    for(int i = 0; i < 3; i++){
     printf("Olá %s\n", nome[i]);
    }
    return 0;
}
//-------------------------------------------------------
int exemplo_2(void){                 // para escrever os numeros 1,2,3,4.
   int numeros[2][2];
   numeros[0][0] = 1;
   numeros[0][1] = 2;
   numeros[1][0] = 3;
   numeros[1][1] = 4;

   for(int i = 0; i < 2; i++){
    for(int j = 0; j ,2; j++){
        printf("numeros[%d][%d] vale %d\n", i, j, numeros[i][j]); 
    }
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
