#include <stdio.h>

/* Verção com erro
 *
 * void main()
 * {
 *   printf("Hoje está um "LINDO" dia!!!\n");
 * }
 * este codigo irá retornar um erro de compilação pois dentro do printf
 * encontram-se duas strings e um conjunto de caracteres estranhos
 * lembrando que para c um conjunto de characteres só é uma string quando está
 * dentro e "" logo o texto (LINDO) está fora de uma string
 *
 * mas fica a pergunta como coloco caracteres especiais como " ou / ou !
 * a resolução é simples, basta colocarmos o \ antes dos caracteres especiais
 * sendo assim, a sprint deve ficar assim: 
*/

main()
{
	printf("Hoje está um \"Lindo\" dia!!!\n");
}
