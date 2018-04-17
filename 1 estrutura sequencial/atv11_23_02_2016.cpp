#include <stdio.h>
#include <stdlib.h>
main()
{
	float a11, a12, b21, b22, dm2;
	printf("o determinante de uma matriz de ordem 2");
	printf("\n\ninsira um valor pra linha1 e coluna1: ");
	scanf("%f", &a11);
	printf("\n\ninsira um valor pra linha1 e coluna2: ");
	scanf("%f", &a12);
	printf("\n\ninsira um valor pra linha2 e coluna1: ");
	scanf("%f", &b21);
	printf("\n\ninsira um valor pra linha2 e coluna2: ");
	scanf("%f", &b22);
	printf("\nmatriz\n");
	printf("\n%0.1f %0.1f", a11, a12); 
	printf("\n%0.1f %0.1f\n", b21, b22); 
	dm2=(a11*b22)+(a12*b21);
	printf("\no resultado e': %0.1f\n", dm2);
	system("pause");
	return 0;
}
