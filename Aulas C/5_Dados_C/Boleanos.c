/* TIPOS DE DADOS:   BOLEANOS (T/F)

- Na linguagem C não existe o tipo de dado Boolean.
- A linguagem C reconhe QUALQUER valor =! 0 como verdadeiro e 0 como falso.



*/

#include <stdio.h>

int exemplo_1(void) {
    int boleano = 1;
    if(boleano == 1){
        printf("verdadeiro!\n");
    }else{
        printf("falso\n");
    }
    return 0;
} 



//CAST (converte apenas a variável que vc quer para outro genero)
//* Não funciona de int para float, apenas o contrário (float para int).

int exemplo_2(void){
    float resp, num1, num2;
    num1 = 2.3;
    num2 = 3.4;
    resp = 0;
  resp = (int)num1 / (int)num2; // os numeros viram INT
  printf("resp = %d", (int)resp); // a resposta sai em int.
}

/* Executa os exemplos acima, na ordem em que aparecem no arquivo. */
int main(void) {
    exemplo_1();
    printf("\n-----\n");
    exemplo_2();
    printf("\n-----\n");
    return 0;
}
