/*Dados dois strings (um contendo uma frase e outro contendo uma palavra), determine 
o número de vezes que a palavra ocorre na frase.
Exemplo: 
Para a palavra ANA e a frase :
ANA E MARIANA GOSTAM DE BANANA
Resp: Temos que a palavra ANA ocorre 4 vezes na frase.
OBS: strings em C são vetores (tamanho longo) de char. Para criar uma string crie um 
vetor “char st[10];”. Para ler uma string com espaços em C use a função gets( 
nome_do_vetor_char ); . Todo fim de string (dentro do vetor) precisa ser delimitado 
pelo caracter ‘\0’. Para inserir Ana em st precisamos fazer: st[0] = ‘A’; st[1] = ‘N’; st[2] = 
‘A’; st[3] = ‘\0’ */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

int main() {
    char frase[100], palavra[20];
    int count = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = 0; 

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; frase[i]; i++) {
        frase[i] = tolower(frase[i]);
    }
    for (int i = 0; palavra[i]; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    char *ptr = frase;
    while ((ptr = strstr(ptr, palavra)) != NULL) {
        count++;
        ptr += strlen(palavra);
    }

    printf("A palavra '%s' ocorre %d vezes na frase.\n", palavra, count);

    return 0;
}
// Exemplo de uso:
// Digite uma frase: ANA E MARIANA GOSTAM DE BANANA
// Digite uma palavra: ANA
// A palavra 'ana' ocorre 4 vezes na frase.
// Compilação:
// gcc ex5_string.c -o ex5_string
// ./ex5_string
// Teste:
// Digite uma frase: ANA E MARIANA GOSTAM DE BANANA 
    