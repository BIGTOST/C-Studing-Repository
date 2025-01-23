#include <stdio.h>

// Situações em que inteiros e caracteres não se devem misturar

// problema com characters registrados em inteiros
int main()
{		               //                 | 2º byte | 1º byte |
	short int num  = 1000;// em  binario seria 0000 0011 1110 1000 se formos interpretar o int como um short que possui apenas 2bytes(8 bits- 0000 0000 )

	printf("Introduza um Caracter: ");scanf("%c",&num); /* 
							     * anotando que estamos lendo o input como se fosse um char logo,
                                                             * lembrando que um char só tem um byte na memoria, logo o scanf só vai altera o
						             * primeiro byte no registro do inteiro
							     * logo dando um exemplo, introduzimos o valor A, ao qual o vaor ASCII é 65
							     * que em binario seria equivalente a um byte escrito como 0100 0001.
							     *
							     * antes de mais relembremos o que estava escrito na variavel num
							     *
							     * a variavel num tratava-se de um inteiro short, logo ocupava 2 bytes na memoria
							     *   0000 0000 0000 0000
							     *  | 2º byte | 1º byte |
							     *
                                                             * Dentro esse espaço estava registrado o valor 1000
							     * que é representado por 0000 0011 1110 1000
							     *
							     * e como já tinha dito antes um char só possui um byte da memoria, então se lermos o input como
							     * um char %c apenas será alterado na memoria daquela variavel um bite de memeoria
							     * se voltarmos ao exemplo do A que converte o 1º byte- 1110 1000- para 0100 0001
							     * deixando o seguinte conjunto de bites na memoria da variavel
							     *  | 2º byte | 1º byte |
							     *   0000 0011 0100 0001
 						             *          || |_______|
							     *          /\     |
							     *        2^9+2^8 +65 = 833
							     *  logo o valor que seria mostrado como inteiro,%d, no print final seria 833 e não o 65 esperado
  							     */
	printf("O valor num é %d cujo o caracter é '%c'\n", num, (char)num);
	return 0;
}


