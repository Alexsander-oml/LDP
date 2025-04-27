// Fatorial em C
// Fatorial de um numero inteiro positivo

//
// Fatorial de 5 = 5 * 4 * 3 * 2 * 1 = 120
// Fatorial de 0 = 1
// Fatorial de 1 = 1
// Fatorial de 2 = 2 * 1 = 2
// Fatorial de 3 = 3 * 2 * 1 = 6
// Fatorial de 4 = 4 * 3 * 2 * 1 = 24

#include <stdio.h>
#include <stdlib.h>

// Declaração da função Fatorial
int Fatorial(int valor);

int main()
{
    int numero, total;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    printf("\n");

    total = Fatorial(numero);
    printf("\n");
    printf("Fatorial de %d = %d\n", numero, total);
    printf("\n");

    return 0;
}

int Fatorial(int valor)
{
    int i;
    int totalFatorial = 1;

    for (i = 1; i <= valor; i++)
    {
        if (i != valor)
        {
            printf("%d * ", i);
        }
        else
        {
            printf("%d = ", i);
            printf("\n");
        }
        totalFatorial = totalFatorial * i;
        printf("%d\n", totalFatorial);
        printf("\n");
    }

    return totalFatorial;
}