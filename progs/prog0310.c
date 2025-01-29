#include <stdio.h>

int main()
{
	float salario;

	printf("Introduza o valor do seu salario: ");scanf("%f",&salario);


	//esta é a forma como normamente se faria a resolução deste problema
       /*
	*	if(salario > 1000)
	*	{
	*		salario += (salario*5)/100;
	*	}
	*	else
	*	{
	*		salario += (salario*7)/100;
	*	}
	*/

	//porem como todos este programa gira em torno de uma unica verificação podemos simplificar o codigo com
	// o operador ternario
	// esta é a sintax
	// condição ? expressão 1 : expressão 2
	// 
	//o operador ternario funciona com a seguinte logica
	// 1º A condição é avaliada
	// 2º Se o resultado for Verdade, executa a expressão 1
	// 2º Se o resultado for falso, executa a expressão 2

	salario > 1000 ? (salario += (salario*5)/100) : (salario += (salario*7)/100);

	//vale ressaltar tambem que esta forma de escrita tambem retorna valores
	//logo poderiamos ter escrito a linha da seguinte forma
	//salario += salario>1000? (salario*5)/100 : (salario*7)/100;
	printf("Salario Atualizado: %.2f\n", salario);
	return 0;
}
