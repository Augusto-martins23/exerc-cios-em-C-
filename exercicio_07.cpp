/*exercício*/

#include <stdio.h>
#include <math.h>

int main(){
	
	int valor; 
	
	printf("Digite um numero: ");
	scanf("%d", &valor);
	
	printf("\nPotencia: %1f",  pow (valor, 2 ));
	printf("\nRaiz quadrada: %1f",  sqrt (valor));

return (0);
}
