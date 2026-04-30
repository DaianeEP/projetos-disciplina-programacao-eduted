#include <stdio.h>
int main (void)
{
    float lado, ladoA, ladoB, ladoC, area, perimetro, base, basemaior, basemenor, altura;	
    printf("Digite o valor dos lados do quadrado\n");
    scanf("%f", &lado);
    area = lado * lado;
    perimetro = 4 * lado;
    printf("O valor da area e: %.2f\n", area);
    printf("O valor do perimetro e: %.2f\n", perimetro);
    
    printf("Digite o valor da base do retangulo\n");
    scanf("%f", &base);
	printf("Digite o valor da altura do retangulo\n");
    scanf("%f", &altura);
    area = base * altura;
	perimetro = 2 * base + 2 * altura;
	printf("O valor da area e: %.2f\n", area);
    printf("O valor do perimetro e: %.2f\n", perimetro);
    
    printf("Digite o valor da base do triangulo\n");
    scanf("%f", &base);
	printf("Digite o valor da altura do triangulo\n");
    scanf("%f", &altura);
    printf("Digite o valor do ladoA do triangulo\n");
    scanf("%f", &ladoA);
    printf("Digite o valor do ladoB do triangulo\n");
    scanf("%f", &ladoB);
    printf("Digite o valor do ladoC do triangulo\n");
    scanf("%f", &ladoC);
    area = base * altura / 2;
	perimetro = ladoA + ladoB + ladoC;
	printf("O valor da area e: %.2f\n", area);
    printf("O valor do perimetro e: %.2f\n", perimetro);
    
    printf("Digite o valor da base maior do trapezio\n");
    scanf("%f", &basemaior);
	printf("Digite o valor da base menor do trapezio\n");
    scanf("%f", &basemenor);
    printf("Digite o valor da altura do trapezio\n");
    scanf("%f", &altura);
    printf("Digite o valor do ladoA do trapezio\n");
    scanf("%f", &ladoA);
    printf("Digite o valor do ladoB do trapezio\n");
    scanf("%f", &ladoB);
    area = (basemaior + basemenor) / 2 * (altura);
	perimetro = ladoA + ladoB + basemaior + basemenor;
	printf("O valor da area e: %.2f\n", area);
    printf("O valor do perimetro e: %.2f\n", perimetro);
    
	return (0);	
}