#include <stdio.h>

void main()
{
	// de forma a evitar problemas de conflito com sistemas que tenha 2 bytes associados ao Int 
	// possuimos uma forma de definir qual o tamanho deve conter a variavel atravez das palavras chave
	// long e short
	// seguindo esta tabela

	/*
	 *   ________________________________________
	 *  | ////////////| Short int | Int |Long Int|
	 *  |MicroMachine |     2     |  2  |    4   |
	 *  |NormalMachine|     2     |  4  |    4   |
	 *  |_____________|___________|_____|________|
	 *
	 */

	short int idade; //pode tambem ser escrito sem int "short idade;" , short de idade já que não precisamos de um numero ginormico
	int montante;
	long int nDaConta;//assim como o short esta declaração tambem pode esclur a keyword int

	printf("Qual a sua idade:");scanf("%hd", &idade);
	printf("Qual o Montante a depositar: "); scanf("%d", &montante);
	printf("Qual o numero da Conta: ");scanf("%ld", &nDaConta);

	printf("Uma pessoa de %hd anos depositou %d€ na conta %ld\n", idade, montante, nDaConta);
}
