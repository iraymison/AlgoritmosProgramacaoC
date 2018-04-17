#include <stdio.h>
#include <stdlib.h>
main()
{
	float v, vo, a, t;
	printf("a velocidade final de um movel:");
	printf("\n\ninsira a velocidadde inicial: ");
	scanf("%f", &vo);
	printf("\ninsira a aceleracao: ");
	scanf("%f", &a);
	printf("\ninsira o tempo: ");
	scanf("%f", &t);
	v=vo+(a*t);
	printf("\na velocidade final e': %0.1f\n", v);
	system("pause");
	return 0;
}
