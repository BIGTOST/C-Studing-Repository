#include <stdio.h>

int main()
{
	int a,b
	//Este codigo serve apenas para organizar pensamentos sobre organização de ifs
	//se fizermos um bloco com a seguinte contrução
	if(a>=0)
		if(b>10)
			prinf("b qualquercoisa")
	else
		printf("Foda-se")

	// o else ira fazer parte do segundo if, pois o sempre que existe uma instrução if-else
	// encadeada, cada componente else pertence sempre ao último if(que ainda não tenha else associado)

	//para resolver esse tipo de situação basta colocar as {} para delimitar os if -elses da forma como queremos sem medo de 
	// ficar desconfigurado
	return 0;
}
