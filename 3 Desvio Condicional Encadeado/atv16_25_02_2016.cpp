#include<stdio.h>
#include<stdlib.h>
main()
{
	float cv, tn, tm;
	printf("\tcrescimento vegetativo");
	printf("\ninsira a taxa de natalidade: ");
	scanf("%f", &tn);
	printf("\n\ninsira a taxa de mortalidade: ");
	scanf("%f", &tm);
	cv=tn-tm;
	printf("\no crescimento vegetativo e': %0.1f\n", cv);
	system("pause");
	return(0);
}
