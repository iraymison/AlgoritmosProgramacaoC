// 10) Ler um vetor de 20 posi��es inteiras e o coloque em ordem crescente, utilizando
//  como estrat�gia de ordena��o a compara��o de pares de elementos adjacentes,
// permutando-os quando estiverem fora de ordem, at� que todos estejam ordenados
// (algoritmo conhecido como �ordena��o por bolhas� ou �m�todo da bolha�).
#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[3], i, j, aux;
	for(i=0; i<3; i++)
	{
		cout<<"insira a "<<(i+1)<<"� posi��o: ";
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
