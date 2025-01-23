#include<stdio.h>

int main()
{
	char caracter;
	printf("Introduza um Caracter:");scanf("%c", &caracter);
	
	//Como vamos apresentar o char como um inteiro é bom indicar no parametro como int adicionando (int)
	printf("O caracter introduzido foi '%c' tem o codigo ASCII %d\n", caracter,(int) caracter);
	return 0;
}
