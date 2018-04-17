#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float x, y,z;
	printf("insira o valor de x: ");
	scanf("%f", &x);
	if((x<-2)||(x>2))
	{
		y=pow(x,2)-1;
		z=2*x;
		printf("o valor de y=%0.1f e o valor de z=%0.1f", y, z);
	}
	else
	{
		y=x/sin(30);
		z=x;
		printf("o valor de y=%0.1f e o valor de z=%0.1f", y, z);
	}
	system("pause");
	return(0);
}
