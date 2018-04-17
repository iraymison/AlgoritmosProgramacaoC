#include<stdio.h>
#include<stdlib.h>
main()
{
	float r1, r2, rt;
	int sp;
	printf("insira o primeiro resistor: ");
	scanf("%f", &r1);
	printf("insira o segundo resistor: ");
	scanf("%f", &r2);
	printf("digite 1 se estiver em SERIE, ou 2 se estiver em PARALELO: ");
	scanf("%i", &sp);
	if(sp==1)
	{
		rt=r1+r2;
	    printf("a resistencia total em SERIE e': %0.1f", rt);
		
	}
	else if(sp==2)
	{
		rt=(r1*r2)/(r1+r2);
	    printf("a resistencia total em PARALELO e': %0.1f", rt);
    }
	system("pause");
	return(0);
}
