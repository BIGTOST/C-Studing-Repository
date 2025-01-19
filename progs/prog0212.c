#include <stdio.h>

int main()
{
	char caracterUm, caracterDois;

	printf("Introduza um Caracter:"); scanf("%c",&caracterUm);
	printf("Introdusa um segundo caracter");scanf(" %c", &caracterDois);

	printf("Os caracteres introduzidos foram '%c' e '%c'\n", caracterUm, caracterDois);
	return 0;
}

