#include <stdio.h>

int main()
{
	int dia, mes, ano;

	printf("Introduza uma data no seguinte formato aaaa-mm-dd:");scanf("%d-%d-%d", &ano, &mes, &dia);

	printf("A data introduzida foi %d/%d/%d \n", dia, mes, ano);
	return 0; 
}
