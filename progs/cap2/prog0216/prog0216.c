#include <stdio.h>


// Casos onde caracters e integer não se devem misturar
//caso: integer para char
int main()
{
	char caracterUm = 'X', caracterDois='Y';
	int caracterUmASCII = (int) caracterUm, caracterDoisASCII = (int) caracterDois;

	printf("Introduza um Inteiro");scanf("%hd", &caracterDois);

	printf("O Valor do caracter 1 ASCII:\n\t valor original: %d,\n\t o caracter original:%c,\n\t O que está na memoria:%d,\n\t caracter na memoria: %c ,\n o atual valor do caracter 2: %c,\n\t valor originar %c  ", 
		caracterUmASCII, (char)caracterUmASCII, (int) caracterUm, caracterUm,
		caracterDois, (char)caracterDoisASCII);

	/*
	 * diferente do caso registrado no prog0215.c
	 * que se tratava de que apenas uma parte da memoria do inteiro seria alterada
	 * neste acontece o contrario declaramos duas variavems Char, que contem apenas um byte cada
	 * porem declaramos ao scanf que seria introduzido um short int que contem 2byte, explicando de uma
	 * forma rude, o scanf não da a minima para qual o tamanho da memoria da variavel, ele ira registrar
	 * o valor intruzido no tamenha do tipo de data que lhe foi indicado, neste caso 2byte por se tratar de um
	 * inteiro 
	 * seguimos o seguinte exemplo:
	 * eu introduzo o valor 65 no scanf, lembrando que o 65 em binario só ocupa 1 byte: 0100 0001
	 * porem para o scanf foi introduzido a seguinte informaçaõ 0000 0000 0100 0001, que seria um inteiro com o valor 65
	 * então o logico seria que o scanf reescrevesse a memoria da variavel que lhe foi atribuida, neste caso caracterDois,
	 * Mas existe um porem a variavel caracter 2 só possui 0000 0000(1bytes) de memoria logo o input irá reescrever o byte que estará
	 * logo ao lado, este espaço pertenceria a variavel caracterUm, que agora passaria a ter 0000 0000 registrado na sua memeoria
	 */

	return 0;
}
