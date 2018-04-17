#include <stdio.h>
#include <stdlib.h>
main()
{
	float s, so, v, t;
	printf("O espaco final de um determinado ponto material");
	printf("\n\ninsira o espaco inicial: ");
	scanf("%f", &so);
	printf("\ninsira a velocidade: ");
	scanf("%f", &v);
	printf("\ninsira o tempo: ");
	scanf("%f", &t);
	s=so+(v*t);
	printf("\no espeço final e': %0.1f\n", s);
	system("pause");
	return 0;
}
