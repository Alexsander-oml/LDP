// Escreva um programa que converta temperaturas de Fahrenheit para Celsus, seguindo 
// a equação 𝐶 =
// (𝐹−32)×5
// 9

#include <stdlib.h> // chama a função exit
#include <math.h> // chama a função sqrt
#include <string.h> // chama a função strlen
#include <ctype.h> // chama a função isdigit
#include <stdio.h> // chama a função printf


int main() {
    float fahrenheit, celsius;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperatura em Celsius: %.2f\n", celsius);
    return 0;
}

// Para compilar:
// gcc ex4_graus.c -o ex4_graus
// ./ex4_graus
// teste ex:
// Digite a temperatura em Fahrenheit: 32
// Temperatura em Celsius: 0.00
// Digite a temperatura em Fahrenheit: 212