// 4) Ler 15 n�meros inteiros e armazenar em um vetor. Calcular o fatorial destes
// n�meros, armazenar em outro vetor e informar o resultado.
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int vet1[3], vet2[3], vet3[3], i, fat, k;
	cout<<"\n*** fatorial de um n�mero ***";
	for(i=0; i<3; i++)
	{
		cout<<"\ninsira o "<<(i+1)<<"� n�mero: ";
		cin>>vet1[i];
	}
    for(i=0; i<3; i++)
    {
    	k=vet1[i];
    	fat=1;
    	while(k>1)
    	{
    		fat*=k;
    		k--;
		}
		vet2[i]=fat;
	}
	cout<<"\n*** fatorial dos n�meros inseridos ***";
	for(i=0; i<3; i++)
	{
		cout<<"\n!"<<vet1[i]<<" = "<<vet2[i];
	}
}
