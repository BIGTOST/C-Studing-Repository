#include <stdio.h>

int main()
{
	int numero;
	
	printf("Introduza um numero: ");scanf("%d",&numero);

	if(numero!=0) // uma coisa que vale anotar é que na linguangem C não existem os valores Booleanos como True ou false
	{             // logo aqui esses valores são definidos como 0 para falso e qualquer outro valor para verdadeiro
		      // portanto ao inves de pormos uma validação "numero != 0" podiamos por apenas a variavel pois se ela tivesse o valor 0 o programa
		      // interpretaria como falso e iria para o else
		printf("O numero introduzido não é 0\n");
	}
	else
	{
		printf("O numero introduzido é 0 \n");
	}
	return 0;
}
