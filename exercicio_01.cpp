/*Exercícios*/

#include <stdio.h>
#include <math.h>

int main()
{
	int num, ant, suc, dobro;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	ant = num - 1;
	suc = num +1;
	dobro = num * 2;
	
	printf("\nAntecessor: %d", ant);
	printf("\nSucessor: %d", suc);
	printf("\nDobro: %d", dobro);
	printf("\nRaiz quadrada: %.1f", sqrt (num));
	
return (0);
}
