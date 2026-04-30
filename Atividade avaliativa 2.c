#include <stdio.h>
#include <math.h>

int main() {
int num, numero, i, isPrime = 1;

printf("Digite um numero inteiro positivo: ");
scanf("%d", &num);

if (num < 2) {
isPrime = 0; 
} else {
for (i = 2; i <= sqrt(num); i++) { 
if (num % i == 0) {
isPrime = 0; 
break;
}
}
}

if (isPrime)
printf("%d e um numero primo.\n", num);
else
printf("%d nao e um numero primo.\n", num);


printf("Digite um numero para gerar a tabuada:");
	if (scanf("%d", &numero) !=1) {
		printf("Entrada invalida. Por favor insira um numero inteiro.\n");
		
	}
		printf("\nTabuada do %d:\n", numero);
		for (i = 0; i <= 10; i++) {
			printf("%d x %d = %d\n", numero, i, numero * i);
			
			
					
}
return 0;
}

