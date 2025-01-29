#include <stdio.h>
//programa para retornar o estado civil dado a sigla

int main()
{
	char estadoCivil;
	
	printf("Introduza o seu estado civil: ");scanf("%c",&estadoCivil);

	if(estadoCivil == 's'||estadoCivil=='S')
	{
		printf("O seu estado civil é Solteiro\n");
	}
	else if(estadoCivil == 'c' || estadoCivil == 'C' )
	{
		printf("O seu estado civil e Casado\n");
	}
	else if(estadoCivil == 'd' || estadoCivil == 'D')
	{
		printf("O seu estado civil e Divorciado\n");
	}
	else if(estadoCivil == 'v' || estadoCivil == 'V')
	{
		printf("O seu estado civil e Viuvo\n");
	}
	else
	{
		printf("O estado introduzido é invalido\n");
	}
	return 0;
}
