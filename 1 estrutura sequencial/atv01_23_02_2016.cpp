#include <stdio.h>
#include <stdlib.h>

using namespace std;

main( )
{
 float F, m, a;
 printf("Programa da 2a Lei de Newton");
 printf("\n\nDigite os valores:");
 printf("\n\nMassa = ");
 scanf("%f" , &m);
 printf("\nAceleracao = ");
 scanf("%f" , &a);
 F = m*a; //processamento
 printf("\nForca = %0.1f\n\n", F);
 system("pause");
 return 0; //a função main deve retornar um valor inteiro
}
