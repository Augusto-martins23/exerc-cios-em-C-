/*exercício*/

#include <stdio.h>


int main(){
	
	float base_maior, base_menor, altura, area;
	
	printf("Base maior: ");
	scanf("%f", &base_maior);
	printf("Base menor: ");
	scanf("%f",&base_menor);
	printf("Altura: ");
	scanf("%f", &altura);
	
	area = ((base_maior + base_menor)*altura)/2;
	
	printf("\nArea: %.2f", area);
	
return (0);
}
