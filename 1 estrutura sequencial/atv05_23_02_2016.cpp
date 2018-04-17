#include <stdio.h>
#include <stdlib.h>
main()
{
	float ec, m, v;
	printf("a energia cinetica produzida por um corpo:");
	printf("\n\ninsira a massa: ");
	scanf("%f", &m);
	printf("\ninsira a velocidade: ");
	scanf("%f", &v);
    ec=(0.5*m*(v*v));
	printf("\na energia cinetica e': %0.1f\n", ec);
	system("pause");
	return 0;
}
