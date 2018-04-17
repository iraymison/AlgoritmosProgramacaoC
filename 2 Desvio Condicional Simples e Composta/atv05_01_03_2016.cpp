#include<stdio.h>
#include<stdlib.h>
main()
{
	float nota;
	printf("insira a nota: ");
	scanf("%f", &nota);
	if((nota>=0)&&(nota<=10))
	printf("nota valida\n");
	else
	printf("nota invalida\n");
	system("pause");
	return(0);
}
