#include <stdio.h>

main()
{	// declaração de uma variavel inteira e atribuindo um a mesma
	int num = 123;

	/*
	 * na string colocamos o valor de %d pois esta representa o local
	 * onde uma variavel do tipo inteiro será exposta no out put 
 	 * no caso que realizamos a baixo o primeiro %d mostra o valor
	 * que está na variavel num e o segundo irá mostrar esse mesmo valor
	 * mas com o valor um agrecido.
	 */
	printf("O valor de num é: %d, e o valor seguinte é: %d\n", num, num+1);
}
