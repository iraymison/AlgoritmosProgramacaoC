// 10) Ler um vetor de 20 posições inteiras e o coloque em ordem crescente, utilizando
//  como estratégia de ordenação a comparação de pares de elementos adjacentes,
// permutando-os quando estiverem fora de ordem, até que todos estejam ordenados
// (algoritmo conhecido como “ordenação por bolhas” ou “método da bolha”).
#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[3], i, j, aux;
	for(i=0; i<3; i++)
	{
		cout<<"insira a "<<(i+1)<<"ª posição: ";
		cin>>vet[i];
	}
	for(i=0; i<3; i++)
	{
		for(j=i+1; j<3; j++)
		{
			if(vet[i]>vet[j])
			{
				aux=vet[i];
			    vet[i]=vet[j];
			    vet[j]=aux;
			}
			else
			    aux=vet[i];
		}
	cout<<"\n"<<vet[i];	
	}
}
