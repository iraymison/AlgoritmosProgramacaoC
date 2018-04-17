//Dados três valores para os lados (A, B e C) de um triângulo verificar e informar se estes
//valores formam um triângulo (A<B+C e B<A+C e C<A+B) ou não.
// PROGRAMA ERRADO 
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a, b, c;
	char t;
	printf("\ninsira tres valores para lados de um triangulo: ");
	printf("\ninsira o primeiro: ");
	scanf("%f", &a);
	printf("\ninsira o segundo: ");
	scanf("%f", &b);
	printf("\ninsira o terceiro: ");
	scanf("%f", &c);

    if((b+c>a)&&(a+c>b)&&(a+b>c))
      {
	   if(a==b&&b==c)
		  printf("\ntriangulo equilatero\n");
	  		else 
	   		{
	   			if (a==b||b==c||a==c)
					printf("\ntriangulo isosceles\n");
	  		    else
	  		        printf("\ntriangulo escaleno");
	        } 
	   }
	  else
	    printf("\nnao forma um triangulo\n"); 
  	system("pause");
}
