package main

import "fmt"

func main() {
	var n int

	fmt.Print("Digite um número: ")
	fmt.Scan(&n)

	contador := 0
	numero := 1

	fmt.Println("Os primeiros", n, "números ímpares são:")

	// Enquanto não mostrar n ímpares
	for contador < n {
		fmt.Println(numero)
		numero += 2
		contador++
	}
}
