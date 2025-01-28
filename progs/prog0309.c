#include <stdio.h>

int main()
{
	float salario;
	char estadoCivil;

	printf("Introduza o seu salario: ");scanf("%f",&salario);
	printf("Insira o seu estado civil S para solteiro e C para casado");scanf(" %c", &estadoCivil);

	if(estadoCivil == 'c' || estadoCivil == 'C')
	{
		printf("Imposto apricado: %.2f", (salario*9)/100);
	}
	else if(estadoCivil == 's' || estadoCivil == 'S')
	{
		printf("Imposto aplicado: %.2f", (salario*10)/100);
	}
	else
	{
		printf("Estado Civil Incorreto");
	}

	return 0;
}
