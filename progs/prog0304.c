#include <stdio.h>

int main()
{

	float salario;

	printf("Introduza o valor do seu salario: ");scanf("%f",&salario);

	if(salario<100000)
	{
		salario += 1000;
	}

	printf("Seu salario atual é %.2f\n", salario);
	return 0;
}
