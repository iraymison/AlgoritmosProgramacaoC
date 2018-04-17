#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float v, vo, a, s, so;
	printf("\na velocidade final de um movel ao percorrer uma determinada distancia");
	printf("\n\ninsira a velocidade inicial: ");
	scanf("%f", &vo);
	printf("\ninsira a aceleracao: ");
	scanf("%f", &a);
	printf("\ninsira o espaco final: ");
	scanf("%f", &s);
	printf("\ninsira o espaco inicial: ");
	scanf("%f", &so);
	v=sqrt(pow(vo,2)+2*a*(s-so));
	printf("\na velocidade final e': %0.1f\n", v);
	system("pause");
}
