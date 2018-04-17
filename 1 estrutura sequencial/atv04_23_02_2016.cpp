#include <stdio.h>
#include <stdlib.h>
main()
{
	float s, so, vo, t, a;
	printf("o espaco final de um determinado ponto material:");
	printf("\n\ninsira o espaco inicial: ");
	scanf("%f", &so);
	printf("\ninsira a velocidade inicial: ");
	scanf("%f", &vo);
	printf("\ninsira o tempo: ");
	scanf("%f", &t);
	printf("\ninsira a aceleracao: ");
	scanf("%f", &a);
	s=so+(vo*t)+(0.5*a*(t*t));
	printf("\no espaco fina final e': %0.1f\n", s);
	system("pause");
	return 0;
}
