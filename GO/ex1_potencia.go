package main

import "fmt"

func main() {
	var x, n int

	fmt.Print("Digite o valor de x: ")
	fmt.Scan(&x)

	fmt.Print("Digite o valor de n (não-negativo): ")
	fmt.Scan(&n)

	resultado := 1
	for i := 0; i < n; i++ {
		resultado *= x // resultado = resultado * x
	}

	fmt.Printf("%d elevado a %d é %d\n", x, n, resultado)
}
