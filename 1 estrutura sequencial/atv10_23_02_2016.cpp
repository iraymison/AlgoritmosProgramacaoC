#include <stdio.h>
#include <stdlib.h>
main()
{
	float a, b, ab;
	printf("a tangente da soma de dois angulos");
	printf("\n\ninsira a 1a tangente: ");
	scanf("%f", &a);
	printf("\ninsira a 2a tangente: ");
	scanf("%f", &b);
	ab=(a+b)/((1-a)*b);
	printf("\no resultado e': %0.1f\n", ab);
	system("pause");
	return 0;
}
