#include <stdio.h>

int main()
{
	float salario;

	printf("Introduza o salario: ");scanf("%f",&salario);

	//printf("%f",salario);
	if(salario <= 0)
	{
		printf("Salarios 0 ou negativos são exentos, primeiro paguei o seu defic\n");
	}
	else if(salario >= 1000)
	{
		printf("Terá que pagar 10%% de imposto equivalente a %.2f€\n",(salario*10)/100);
	}
	else
	{
		printf("Terá que pagar 5%% de imposto equivalente a %.2f€\n",(salario*5)/100);
	}

	return 0;
}
