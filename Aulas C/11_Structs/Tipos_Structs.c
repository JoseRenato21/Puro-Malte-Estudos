#include <stdio.h>
#include <string.h>

/*                  STRUCT
 -Estrutura.

Crio uma struct e coloco quantos registros eu quiser.
Declaro ela dentro da int main como:  struct nome_da_struct nova_var;


*/

struct st_aluno{      // struct nome{...};

    char matricula[10];
    char nome[100];
    char curso[100];
    int ano_nascimento;

};



int main(){

    struct st_aluno aluno1;

    printf("Informe a matrícula do aluno: ");
    fgets(aluno1.matricula, 10, stdin);

    printf("Informe o seu nome: ");
    fgets(aluno1.nome, 100, stdin);

    printf("Informe seu curso: ");
    fgets(aluno1.curso, 100, stdin);

    printf("Informe seu ano de nascimento: ");
    scanf("%d", &aluno1.ano_nascimento);

    printf("===================DADOS DO ALUNO==================\n");
    printf("Matrícula: %s\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Curso: %s\n",aluno1.curso);
    printf("Ano de nascimento %d\n", aluno1.ano_nascimento);




    return 0;
}