#include <stdio.h>

int main()
{
	int valorUm, valorDois;

	printf("Introduza dois valores: "); scanf("%d%d",&valorUm, &valorDois);

	if(valorUm > valorDois)
	{
		printf("%d %d\n",valorDois, valorUm);
	}
	else
	{
		printf("%d %d\n", valorUm,valorDois);
	}

	return 0;
}
