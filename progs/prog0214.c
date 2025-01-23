#include <stdio.h>

int main()
{
	int num;
	printf("Introduza um Inteiro"); scanf("%d",&num);
	
	// assim como quando convertemos um char para int aparece o codigo ASCII do char, o contrario acontece
	printf("Foi introduzido o %d que representa o charcter: '%c'\n", num, (char) num);

	printf("O caracter seguinte '%c' tem o codigo ASCII nº %d\n", (char) (num+1), num+1);
	return 0;
}
