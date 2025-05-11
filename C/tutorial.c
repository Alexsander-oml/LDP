// Programa básico em C
#include <stdio.h>

// Função principal do programa
int main() {
    // Exibe uma mensagem na tela
    printf("Olá, mundo!\n");

    // Tipos de dados
    // Declaração e inicialização de variáveis
    int idade = 20;          // Inteiro
    float altura = 1.75;     // Ponto flutuante
    char letra = 'A';        // Caractere

    // Exibe os valores das variáveis
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Letra: %c\n", letra);

    // Condicional if-else
    int idade_condicional = 18;
    if (idade_condicional >= 18) {
        // Executa este bloco se a condição for verdadeira
        printf("Maior de idade\n");
    } else {
        // Executa este bloco se a condição for falsa
        printf("Menor de idade\n");
    }

    // Laço for
    // Executa um bloco de código repetidamente com base em uma condição
    for (int i = 0; i < 5; i++) {
        printf("For loop: %d\n", i);
    }

    // Laço while
    // Executa um bloco de código enquanto a condição for verdadeira
    int j = 0;
    while (j < 5) {
        printf("While loop: %d\n", j);
        j++;
    }

    // Funções
    // Chama a função saudacao
    saudacao();

    // Ponteiros
    // Declaração de um ponteiro e manipulação de memória
    int x = 10;
    int *p = &x; // Ponteiro p armazena o endereço de x
    printf("Valor de x: %d\n", *p); // Acessa o valor de x através do ponteiro

    return 0; // Indica que o programa terminou com sucesso
}

// Função saudacao
// Exibe uma mensagem de saudação
void saudacao() {
    printf("Bem-vindo!\n");
}
