#include<stdio.h>
#include<stdlib.h>
main()
{
	float n1, n2;
	printf("insira o primeiro numero: ");
	scanf("%f", &n1);
	printf("insira o segundo numero: ");
	scanf("%f", &n2);
	if(n1<n2)
	printf("o primeiro e' o menor\n");
	else
	printf("o segundo e o menor\n");
	system("pause");
}
