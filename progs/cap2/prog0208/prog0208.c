#include <stdio.h>

void main()
{
	float quilos = 1.0E3;  // representação de logaritimo dizendo que este valoe é 1 * 10^3= 1000 pois uma tonelada equivale a 1000 quilos
	double gramas = 1.0e6; // 1*10^6 = 1 000 000 pois uma tonelada equivale a 1 milhão de gramas

	float numDeToneladas;
	printf("Quantos Toneladas Foram compradas:");scanf("%f",&numDeToneladas);
	
	printf("Nº de quilos = %f = %e", numDeToneladas * quilos,
                                         numDeToneladas * quilos);
	printf("Nº de gramas = %f = %e", numDeToneladas * gramas,
                                         numDeToneladas * gramas);
}
