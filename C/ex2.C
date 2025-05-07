#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    int codigo;
    double preco;
} Produto;

typedef struct Node {
    Produto produto;
    struct Node* next;
} Node;

Node* adicionar(Node* inicio) {
    Node* novo = (Node*)malloc(sizeof(Node));

    printf("Nome do produto: ");
    scanf(" %[^\n]", novo->produto.nome);

    printf("Código do produto: ");
    scanf("%d", &novo->produto.codigo);

    printf("Preço do produto: ");
    scanf("%lf", &novo->produto.preco);

    novo->next = inicio;
    return novo;
}

void mostrar(Node* atual) {
    if (atual == NULL) {
        printf("Nenhum produto na lista.\n");
        return;
    }

    while (atual != NULL) {
        printf("\nNome: %s\n", atual->produto.nome);
        printf("Código: %d\n", atual->produto.codigo);
        printf("Preço: %.2lf\n", atual->produto.preco);
        atual = atual->next;
    }
}

void buscar(Node* atual) {
    char nome[30];
    printf("Nome para buscar: ");
    scanf(" %[^\n]", nome);

    while (atual != NULL) {
        if (strcmp(atual->produto.nome, nome) == 0) {
            printf("\nProduto encontrado:\n");
            printf("Nome: %s\n", atual->produto.nome);
            printf("Código: %d\n", atual->produto.codigo);
            printf("Preço: %.2lf\n", atual->produto.preco);
            return;
        }
        atual = atual->next;
    }

    printf("Produto não encontrado.\n");
}

void liberar(Node* atual) {
    Node* temp;
    while (atual != NULL) {
        temp = atual;
        atual = atual->next;
        free(temp);
    }
}

int main() {
    Node* lista = NULL;
    int opcao;

    do {
        printf("\n1 - Adicionar produto\n");
        printf("2 - Mostrar produtos\n");
        printf("3 - Buscar por nome\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            lista = adicionar(lista);
        } else if (opcao == 2) {
            mostrar(lista);
        } else if (opcao == 3) {
            buscar(lista);
        } else if (opcao == 4) {
            liberar(lista);
            printf("Saindo...\n");
        } else {
            printf("Opção inválida.\n");
        }

    } while (opcao != 4);

    return 0;
}
