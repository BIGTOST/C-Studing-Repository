#include <stdio.h>

int main()
{
	float salario, taxa;

	printf("Introduza o valor do salario: ");scanf("%f", &salario);
	//printf("%f",salario);
	if(salario<1000)
	{
		if(salario<0)
		{
			printf("Salario não pode ser negativo\n");
			return 0;
		}

		//atribuindo o valor de 5% referentes apo salario
		// a variavel taxa
		taxa = (salario*5)/100;
	}
	else if(salario == 1000 || salario < 5000)
	{
		taxa = (salario*11)/100;

	}
	else if(salario >= 5000)
	{
		taxa = (salario*35)/100;
	}


	printf("O seu salario bruto equivale a %.2f€, delere serão taxados %.2f, ficando com um salario liquido de %.2f \n", salario, taxa, salario-taxa);
	return 0;
}

