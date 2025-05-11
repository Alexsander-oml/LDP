//3. Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Numero invalido\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", 2 * i + 1);
    }
    printf("\n");
    return 0;
}

// pra testar:
// gcc ex3_impares.c -o ex3_impares
// ./ex3_impares