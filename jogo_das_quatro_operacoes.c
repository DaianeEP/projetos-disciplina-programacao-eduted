#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, resposta, resultado, nivel;
    char operador;
    int pontos = 0;
    int rodadas = 10; // definir quantas rodadas o usuário irá jogar

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

   printf("Bem-vindo ao Jogo Matematico!\n");
    printf("Escolha o nivel de dificuldade:\n");
    printf("1 - Facil (numeros ate 10)\n");
    printf("2 - Medio (numeros ate 20)\n");
    printf("3 - Dificil (numeros ate 50)\n");
    printf("Digite o numero do nivel: ");
    scanf("%d", &nivel);
    
    printf("Voce tera 10 questoes. Boa sorte!");

    if (nivel < 1 || nivel > 3) {
        printf("Nivel invalido! O jogo sera encerrado.");
        return 1;
    }

    for (int i = 0; i < rodadas; i++) {
		num1 = rand() % (nivel * 10) + 1; // Escolhe um número aleatório baseado no nível.
        num2 = rand() % (nivel * 10) + 1;
        int operadorTipo = rand() % 4; // 0 = +, 1 = -, 2 = *, 3 = /
        
//Define o operador utilizado em cada caso.
        switch (operadorTipo) {
            case 0:
                operador = '+';
                resultado = num1 + num2;
                break;
            case 1:
                operador = '-';
                resultado = num1 - num2;
                break;
            case 2:
                operador = '*';
                resultado = num1 * num2;
                break;
            case 3:
                operador = '/';
                resultado = num1 / num2;
                break;
        }

        printf("Rodada %d: Qual e %d %c %d? ", i + 1, num1, operador, num2);
        scanf("%d", &resposta);
        
// Exibe se a resposta está correta ou errada.
        if (resposta == resultado) {
            printf("Correto! Voce ganhou 1 ponto."); 
            pontos++;
        } else {
            printf("Errado! A resposta correta e %d.", resultado);
        }
    }

    printf("Fim do jogo! Voce ganhou %d de %d pontos", pontos, rodadas);
    return 0;
}