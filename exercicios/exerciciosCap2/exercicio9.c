#include <stdio.h>


int main()
{
	int dia, mes, ano;
	
	printf("Intruza uma data na seguinte orde:\n\tdia: ");scanf("%d",&dia);
	printf("\tMês: "); scanf("%d", &mes);
	printf("\tAno: "); scanf("%d", &ano);

	printf("A data colocada foi %d/%d/%d\n",dia,mes,ano);
	return 0;
}
