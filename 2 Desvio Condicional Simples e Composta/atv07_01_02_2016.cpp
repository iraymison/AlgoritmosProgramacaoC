#include<stdio.h>
#include<stdlib.h>
main()
{
	float p1, p2, pj1, pj2, pj3, m;
	printf("insira a nota da prova 1 e prova 2: ");
	scanf("%f %f", &p1, &p2);
	printf("insira a nota projeto1, projeto2 e projeto3: ");
	scanf("%f %f %f", &pj1, &pj2, &pj3);
	m=(p1+p2+pj1+pj2+pj3)/5;
	if(m<5)
	printf("reprovado\n");
	else if(m>=5)
	printf("aprovado\n");
	system("pause");
	return(0);
}
