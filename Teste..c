#include <stdio.h>
int main () {
	int numero, i, isPrime=1;
	
	printf("Digite um numero para gerar a tabuada:");
	if (scanf("%d", &numero) !=1) {
		printf("Entrada invalida. Por favor insira um numero inteiro.\n");
		return 1;
	}
		printf("\nTabuada do %d:\n", numero);
		for (i = 0; i <= 10; i++) {
			printf("%d x %d = %d\n", numero, i, numero * i);
			
			}
			
printf("Digite um numero inteiro positivo: ");
scanf("%d", &num);

if (num < 2) {
isPrime = 0; // Números menores que 2 não são primos
} else {
for (i = 2; i <= sqrt(num); i++) { // Verifica divisores até a raiz quadrada de num
if (num % i == 0) {
isPrime = 0; // Encontrou um divisor, não é primo
break;
}
}
}

if (isPrime)
printf("%d e um numero primo.\n", num);
else
printf("%d nao e um numero primo.\n", num);
			return (0);
						
}