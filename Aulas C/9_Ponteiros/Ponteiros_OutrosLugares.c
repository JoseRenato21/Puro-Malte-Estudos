#include <stdio.h>



int exemplo_1(void){
    /*                 0   1   2   3   4
                     |   |   |   |   |  |
    int = 4 bytes
    bit = 0 / 1
    byte = 0000 0001
    4 bytes = 0000 0000 0000 0000 0000 0000 0000 0001
    */

    int valores[5] = {1,2,3,4,5};

    for(int i = 0; i<5; i++){
        printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
    }

    printf("O array valores possui %ld bytes\n", sizeof(valores));

    printf("Valores[0] vale %d e o endereço de memoria é %d\n", valores[0], &valores[0]);
    printf("Valores[0] vale %d e o endereço de memoria é %p\n", valores[0], valores[0]);
    printf("Valores[0] vale %d e o endereço de memoria é %d\n", valores[0], &valores);

    return 0;
}
/* RODANDO:

O valor 1 tem 4 bytes
O valor 2 tem 4 bytes
O valor 3 tem 4 bytes
O valor 4 tem 4 bytes
O valor 5 tem 4 bytes
O array valores possui 20 bytes
Valores[0] vale 1 e o endereço de memoria é -1871202144
Valores[0] vale 1 e o endereço de memoria é 0x1
Valores[0] vale 1 e o endereço de memoria é -1871202144

*/
//_____________________________________________________________ OU _______________________________________________________
#include <stdio.h>



int exemplo_2(void){
    /*                 0   1   2   3   4
                     |   |   |   |   |  |
    int = 4 bytes
    bit = 0 / 1
    byte = 0000 0001
    4 bytes = 0000 0000 0000 0000 0000 0000 0000 0001
    */

    int valores[5] = {1,2,3,4,5};

    for(int i = 0; i<5; i++){
        printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
    }

    printf("O array valores possui %ld bytes\n", sizeof(valores));
                                                                                    // MUDANÇAS AQUI ABAIXO
    printf("Valores[0] vale %d e o endereço de memoria é %p\n", valores[0], valores[0]);
    printf("Valores[0] vale %d e o endereço de memoria é %d\n", valores[0], &valores[0]);
    printf("*(valores) vale %d e o endereço de memoria é %p\n\n", *(valores), *(valores));

    printf("*(valores+1) vale %d e o endereço de memoria é %p\n", *(valores+1), *(valores+1));  //ponteiro aponta para a primeira posição do array +1.
    printf("*(valores+2) vale %d e o endereço de memoria é %p\n", *(valores+2), *(valores+2));
    printf("*(valores+3) vale %d e o endereço de memoria é %p\n", *(valores+3), *(valores+3));
    return 0;
}
/* RODANDO

O valor 1 tem 4 bytes
O valor 2 tem 4 bytes
O valor 3 tem 4 bytes
O valor 4 tem 4 bytes
O valor 5 tem 4 bytes
O array valores possui 20 bytes
Valores[0] vale 1 e o endereço de memoria é 0x1         (se refere ao primeiro espaço do array)
Valores[0] vale 1 e o endereço de memoria é -417822176
*(valores) vale 1 e o endereço de memoria é 0x1         (se refere ao ponteiro do array em sí que aponta para o
                                                         mesmo endereço do primeiro espaço)
*(valores+1) vale 2 e o endereço de memoria é 0x2
*(valores+2) vale 3 e o endereço de memoria é 0x3
*(valores+3) vale 4 e o endereço de memoria é 0x4

*/

/* Executa os exemplos acima, na ordem em que aparecem no arquivo. */
int main(void) {
    exemplo_1();
    printf("\n-----\n");
    exemplo_2();
    printf("\n-----\n");
    return 0;
}
