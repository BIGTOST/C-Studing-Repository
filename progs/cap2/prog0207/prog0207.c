#include <stdio.h>

void main()
{
	/*
	 * floats e  doubles
	 * numeros Reais basicamente
	 * podem ir desde 0 até a  0.asdasasdasd puta que o pario
	 *
	 */

	float raio, perimetro;
	double pi = 3.1415927, area;

	printf("Introduza o Raio da Circunferência:");scanf("%f", &raio);
	area = pi * raio*raio;
	perimetro = 2 * pi * raio;
	
	printf("\tÁrea = %f\n\tPerimetro=%f\n", area, perimetro);
}
