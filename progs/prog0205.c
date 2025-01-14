#include <stdio.h>

void main()
{
	// para contextualiza um byte consegue conter 8 bits sendo estes ligados ou desligado
	// ou seja um byte pode ter os numeros -256 até 255
	// exemplo um char pode conter até o valor 255 nos positivos
	// um int que tem 2 bytes em microcomputadores
	// pode conseguir valores entre -32768 a 32767 (por que não -32768 até 32768?? por a porra do 0 existe)
	// já em um computador normal que tem 4bytes de memoria os valores podem ir de -2.147.483.648 até 2.147.483.647
	// e por ai em diante
	printf("The Size in bytes of a Char is %ld\n", sizeof(char)); 

	printf("The Size in bytes of a Int is %ld\n", sizeof(int)); // tamanho de um int pode variar dependendo do hardware e para
								    //garantir problemas de confusão de uma hora ser 2byte e outra
								    // hora ser 4 temos o prog0206 para explicar

	printf("The Size in bytes of a Float is %ld\n", sizeof(float));//por algum motivo o float possui o mesmo tamanho em bytes
	printf("The Size in bytes of a Double is %ld\n", sizeof(double));
}
