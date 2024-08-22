/*exercicio*/

#include <stdio.h>
#include <math.h>


int main(){
	
	int num1, num2, total;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite um numero: ");
	scanf("%d", &num2);
	
	total = pow(num1, num2);
	
	printf("\nTotal: %d", total);
	
	
	
return (0);	
}
