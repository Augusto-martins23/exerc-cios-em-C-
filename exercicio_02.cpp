/*exerício 2*/

#include <stdio.h>

int main()

{
	
	float n1, n2, n3, n4, media;
	
	printf("Nota 01: ");
	scanf("%f", &n1);
	printf("Nota 02: ");
	scanf("%f", &n2);
	printf("Nota 03: ");
	scanf("%f", &n3);
	printf("Nota 04: ");
	scanf("%f", &n4);
	
	media = (n1+ n2+ n3+ n4)/4;
	
	printf("Media: %.1f", media);
	
	
return (0);	
}
