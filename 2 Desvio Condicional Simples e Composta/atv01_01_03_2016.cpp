// Autor: Raymison Asthon Maklouf Ramos
//Calcular e informar a soma dos termos de uma pg infinita
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float a1, n, q, sn;
	printf("insira o valor de a1: ");
	scanf("%f", &a1);
	printf("isnira o valor de q: ");
	scanf("%f", &q);
	printf("insira o valor de n: ");
	scanf("%f", &n);
	if(q!=1)
	sn=a1*(pow(q,n)-1);
	else
	if(q=1)
	sn=n*a1;
	printf("a soma dos termos de uma PG infinita e': %0.1f\n", sn);
	system("pause");
	return(0);
}
