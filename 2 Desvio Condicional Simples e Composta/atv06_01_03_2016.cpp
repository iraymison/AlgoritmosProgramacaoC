#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float x, y;
	printf("insira um valor para x: ");
	scanf("%f", &x);
	if(x>=1)
	y=pow(x,2)+2*x;
	else
	y=(-3*x)+1;
	printf("o resultado e': %0.1f", y);
	system("pause");
	return(0);
}
