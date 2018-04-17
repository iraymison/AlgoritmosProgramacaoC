// Autor: Raymison Asthon Maklouf Ramos
// Calcular as raízes de uma equação do segundo grau, levando em consideração a análise da existência de raízes reais
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float a, b, c, d, x1, x2;
	printf("insira o valor de a: ");
	scanf("%f", &a);
	printf("insira o valor de b: ");
	scanf("%f", &b);
	printf("insira o valor de c: ");
	scanf("%f", &c);
	printf("insira o valor de delta: ");
	scanf("%f", &d);
	if(d>=0)
	{
		x1=(-b)+sqrt(d)/(2*a);
		x2=(-b)-sqrt(d)/(2*a);	
	printf("a raiz de x1 e': %0.1f\n", x1);
	printf("a raiz de x2 e': %0.1f\n", x2);
	}
	else
	printf("\n\tnao existem raizes reais\n");
	system("pause");
	return(0);
}
