#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	float fel, k, q1, q2, d;
	printf("a forca eletrica produzida por duas cargas a uma determinada distancia no espaco");
	printf("\n\ninsira K: ");
	scanf("%f", &k);
	printf("\ninsira Q1: ");
	scanf("%f", &q1);
	printf("\ninsira Q2: ");
	scanf("%f", &q2);
	printf("\ninsira a distancia: ");
	scanf("%f", &d);
    fel=k*(fabs(q1)*fabs(q2))/pow(d,2);
	printf("\na forca eletrica produzida e': %0.1f\n", fel);
	system("pause");
	return 0;
}
