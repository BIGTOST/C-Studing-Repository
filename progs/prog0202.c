#include <stdio.h>

main()
{
	/*
	 * Tal qual existe uma função para mostrar valores, exite também uma 
	 * função para a leitura - scanf
	 */

	int num;
	printf("Introduza um Nº:");
	scanf("%d", &num);

	printf("O numero introduzido foi: %d.\n", num);
}
