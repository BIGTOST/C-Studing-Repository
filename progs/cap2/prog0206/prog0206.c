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

       	unsigned int idade; //pode tambem ser escrito sem int "short idade;" , short de idade já que não precisamos de um numero ginormico
	int montante;
	long int nDaConta;//assim como o short esta declaração tambem pode esclur a keyword int

	printf("Qual a sua idade:");scanf("%u", &idade);
	printf("Qual o Montante a depositar: "); scanf("%d", &montante);
	printf("Qual o numero da Conta: ");scanf("%ld", &nDaConta);

	printf("Uma pessoa de %u anos depositou %d€ na conta %ld\n", idade, montante, nDaConta);

	/*
	 * Por um padrão variaveis do tipo padrão podem ser do tipo inteiro tanto positivas como  negativas
	 * por exemplo um valor intero em um micro computador with 2bytes na memoria pode conter os numeros entre -32 768 ate 32 767
	 * mas podemos dizer ao program que só queremos numeros positivos declarando a variavel como sem sinal ou Unsigned
	 * exemplo:
	 */
	unsigned int Idade; //assim como o short ou o long tambem pode ser só unsigned
			    //a Idade não poderá ser negativa

	/*
         * Um detalhe que é bom mencinoar é que devemos utilizar %u ao invez de %d no scanf e no printf
	 * supunhetamos que o tamanho de um inteiro é de 2bytes, apresenta-se em seguida a lista de limites em que uma
	 * variavel inteira pode variar, dependendo dos prefixos utilizados
	 *  _________________________________________________________________________________
  	 * |   Tipo de Variavel   |     Nº de Bytes    |    Valor Minimo   |   Valor maximo  |
 	 * |   Int                |          2         |      -32 768      |     32 767      |
	 * |   short int          |          2         |      -32 768      |     32 767      |
	 * |   long int           |          4         |  -2 147 483 648   |  2 147 483 647  |
         * |   unsigned int       |          2         |         0         |     65 535      |
	 * |   unsigned short int |          2         |         0         |     65 535      |
	 * |   unsigned long int  |          4         |         0         |  4 294 967 295  |
	 * |______________________|____________________|___________________|_________________|
	 */
}
