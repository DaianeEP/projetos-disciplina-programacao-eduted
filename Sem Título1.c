#include <stdio.h>

int main() {
    int numero, i = 1;

    // Solicita ao usuário o número para calcular a tabuada
    printf("Digite um número para calcular a tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada do %d:", numero);

    // Laço while para calcular a tabuada de 1 a 10
    while (i <= 10) {
        printf("%d x %d = %d", numero, i, numero * i);
        i++;  // Incrementa o contador
    }

    return 0;
}