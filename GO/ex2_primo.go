package main

import "fmt"

func main() {
	var n int

	fmt.Print("Digite um número inteiro positivo: ")
	fmt.Scan(&n)

	if n < 2 {
		fmt.Println("Não é primo")
		return
	}

	primo := true

	for i := 2; i*i <= n; i++ {
		if n%i == 0 {
			primo = false
			break
		}
	}

	if primo {
		fmt.Println("É primo")
	} else {
		fmt.Println("Não é primo")
	}
}
