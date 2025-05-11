// 2. Dado um inteiro positivo n, verificar se n é primo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eh_primo(int n){
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    if (eh_primo(numero)){
        printf("%d eh primo\n", numero);
    } else {
        printf("%d nao eh primo\n", numero);
    }
    return 0;
}

// pra testar:
// gcc ex2_primo.c -o ex2_primo -lm
// ./ex2_primo