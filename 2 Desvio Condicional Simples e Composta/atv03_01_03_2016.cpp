#include<stdio.h>
#include<stdlib.h>
main()
{
	int cartao;
	int senha;
	printf("insira o numero do cartao: ");
	scanf("%i", &cartao);
	printf("insira a senha: ");
	scanf("%i", &senha);
    if((cartao!=321)&&(senha!=123))
	{
			printf("\tacesso negado\n");
	}
	else

	{
		printf("\tacesso autorizado\n");
	}
	system("pause");
	return(0);
	
}
