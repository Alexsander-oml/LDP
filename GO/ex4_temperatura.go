package main

import "fmt"

func main() {
	var fahrenheit float64

	fmt.Print("Digite a temperatura em Fahrenheit: ")
	fmt.Scan(&fahrenheit)

	// Fórmula de conversão
	celsius := (fahrenheit - 32) * 5 / 9

	fmt.Printf("Temperatura em Celsius: %.2f\n", celsius)
}
