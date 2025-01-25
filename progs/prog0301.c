#include <stdio.h>

int main()
{
	int x,y;

	printf("Introduza dois valores:");scanf("%d%d", &x,&y);

	printf("Relação de igualdades e grandezas entre os dois valores:\n");
	printf("\t A relação de igualdade valores %d == %d : %d\n",x,y,x==y);
	printf("\t A relação de maior valores %d > %d : %d\n",x,y,x>y);
	printf("\t A relação de maior/igual dos valores %d >= %d : %d\n",x,y,x>=y);
	printf("\t A relação de menor dos valores %d < %d : %d\n",x,y,x<y);
	printf("\t A relação de menor/igual dos valores %d <= %d : %d\n",x,y,x<=y);
	printf("\t A relação de diferença dos valores %d != %d : %d\n",x,y,x!=y);

	return 0;
}
