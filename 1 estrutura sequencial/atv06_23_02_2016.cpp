#include <stdio.h>
#include <stdlib.h>
main()
{
	float q, m, c, t, to;
	printf("a quantidade de calor produzida por um corpo:");
	printf("\n\ninsira a massa: ");
	scanf("%f", &m);
	printf("\ninsira o C: ");
	scanf("%f", &c);
	printf("\ninsira o tempo final: ");
	scanf("%f", &t);
	printf("\ninsira o tempo inicial: ");
	scanf("%f", &to);
    q=m*c*(t-to);
	printf("\na quantidade de calor produzidada e': %0.1f\n", q);
	system("pause");
	return 0;
}
