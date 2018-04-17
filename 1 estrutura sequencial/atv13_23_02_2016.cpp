#include <stdio.h>
#include <stdlib.h>
#include<math.h>
main()
{
	float ves, r;
	printf("o volume de uma esfera");
	printf("\n\ninsira o raio: ");
	scanf("%f", &r);
	ves=(4*3,14*pow(r,3))/3;
	printf("\no resultado e': %0.1f\n", ves);
	system("pause");
	return 0;
}
