#include <stdio.h>

int main()
{
	int x;

	printf("Introduza um valor: "); scanf("%d",&x);

	if(x>=0)
	{
		printf("O numero é Positivo\n");
	}
	else
	{
		printf("O numero é negativo\n");
	}

	return 0;
}
