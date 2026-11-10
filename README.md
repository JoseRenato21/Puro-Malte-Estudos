# Puro-Malte-Estudos

Caderno de estudos de **linguagem C**: um exemplo comentado para cada tópico, na ordem em que aprendi, mais exercícios de recursividade, matrizes e problemas do Beecrowd. Os comentários dentro dos arquivos explicam o raciocínio por trás de cada trecho.

## Como compilar

Precisa de um compilador C (`gcc` ou `clang`).

```bash
./compilar.sh                                   # compila tudo para a pasta build/
./compilar.sh "Aulas C/9_Ponteiros/Ponteiros.c" # compila um arquivo só
./build/Ponteiros                               # executa
```

O script usa `-Wall -Wextra` e reporta quais exemplos compilaram. Para trocar de compilador: `CC=clang ./compilar.sh`.

## Conteúdo

| Pasta | Assunto |
|-------|---------|
| `1_Introducao` | Estrutura de um programa e `printf` |
| `2_Tipos_e_Variaveis` | `int`, `float`, `double`, `char`, `sizeof`, limites, cast e constantes |
| `3_Operadores` | Aritméticos, relacionais, lógicos, incremento, atribuição composta e ternário |
| `4_Controle_de_Fluxo` | `if`/`else`, `for`, `while`, `do-while`, `break` e `continue` |
| `5_Dados_C` | Booleanos em C (qualquer valor diferente de zero é verdadeiro) e cast |
| `6_Matriz_Vetor` | Vetores e matrizes |
| `7_Binário` | Operações bit a bit |
| `8_Funções` | Funções, protótipos e separação em arquivos `.h`/`.c` |
| `9_Ponteiros` | Endereços, ponteiros, aritmética de ponteiros e ponteiros com vetores |
| `10_Entradas_Saidas` | `scanf`, `printf` e formatação |
| `11_Structs` | `struct`, vetores de `struct` e `typedef` |
| `12_Recursividade` | Caso base, Fibonacci e fatorial |
| `13_Alocacao_Dinamica` | `malloc`, `realloc`, `free` |
| `14_Arquivos` | `fopen`, `fprintf`, `fscanf`, `fclose` |
| `Exercícios` | Matriz e vetor, recursividade (somatório e variações) |
| `Beecrowd` | Soluções de problemas do juiz online |

Alguns arquivos reúnem mais de um exemplo. Nesses casos cada exemplo é uma função `exemplo_N` e a `main` os executa em sequência.

## Exemplo

```c
/* 12_Recursividade: todo laço recursivo precisa de uma condição de parada */
int somatorio(int n) {
    if (n <= 1) return n;
    return n + somatorio(n - 1);
}
```

## Estrutura

```
.
├── Aulas C/
│   ├── 1_Introducao/ ... 14_Arquivos/
│   └── Exercícios/
├── Beecrowd/
├── compilar.sh
└── README.md
```
