#include<stdio.h>
#include<stdlib.h>
main()
{
	float sal, d;
	printf("\tIMPOSTO DE RENDA A SER DESCONTADO DO SALARIO DE UM TRABALHADOR");
	printf("\nInsira o salario: ");
	scanf("%f", &sal);
	if (sal<=1050)
	{
		d=0;
	}
	else if (sal<=2500)
	{
		d=(sal/100)*15;
	}
	else if (sal<=7500)
	{
		d=(sal/100)*25;
	}
	else
	{
		d=(sal/100)*35;	
	}
	printf("\no desconto no salario e': %0.1f\n", d);
	system("pause");
	return 0;
}
