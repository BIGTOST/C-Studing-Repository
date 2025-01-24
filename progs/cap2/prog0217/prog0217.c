#include <stdio.h>

// exercicio resolvidos do livro
// Escreva um programa em C que peça ao usuário dois inteiros e apresnte o resultado da realização das operações aritméticas tradicionais
int main()
{
	int variavelUm, variavelDois;// declaração das variaveis

	printf("Introduza dois valores inteiro:");scanf(" %d%d", &variavelUm, &variavelDois);

	printf("Equações Basicas com os valores introduzido: \n");
	printf("\t Soma: %d + %d = %o opa digo %d\n", variavelUm, variavelDois, variavelUm+variavelDois, variavelUm+variavelDois);
	printf("\t Subtração: %d - %d = %x opa digo %d\n", variavelUm, variavelDois, variavelUm-variavelDois, variavelUm-variavelDois);
	printf("\t Multiplicação: %d * %d = %d\n", variavelUm, variavelDois, variavelUm*variavelDois);
	printf("\t Divisão: %d / %d = %d\n", variavelUm, variavelDois, variavelUm/variavelDois);
	printf("\t Divisão: %d %% %d = %d\n", variavelUm, variavelDois, variavelUm%variavelDois);

	return 0;
}

/*
 * Verção do Livro
 * #inclue <stdio.h>
 *
 * main()
 * { int a,b;
 *   printf("Introduza dois Inteiros: ");
 *   scanf("%d%d", &a, &b);
 *   printf("%d + %d = %d",a,b,a+b);
 *   printf("%d - %d = %d",a,b,a-b);
 *   printf("%d * %d = %d",a,b,a*b);
 *   printf("%d / %d = %d",a,b,a/b);
 *   printf("%d % %d = %d",a,b,a%b);
 * }
 */
