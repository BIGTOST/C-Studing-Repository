#include <stdio.h>

main()
{
	int a=0;
	int* point = &a;
	printf("%d, %p \n", a, point);
}
