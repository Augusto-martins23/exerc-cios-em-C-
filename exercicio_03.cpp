/*Exercício 03*/

#include <stdio.h>

int main()
{
	float deposito, taxa = 0.5, rendimento, total;
	
	printf("Valor para deposito: ");
	scanf("%f", &deposito);
	
	rendimento = deposito * (taxa/100);
	total = deposito + rendimento;
	
	printf("\nRendimento: %.2f", rendimento);
	printf("\nTotal: %.2f", total);
	
	
return (0);	
}
