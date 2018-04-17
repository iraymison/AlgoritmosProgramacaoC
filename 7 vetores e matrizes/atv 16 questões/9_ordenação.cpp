// 9) Ler um vetor de 20 posições inteiras e o coloque em ordem crescente, utilizando a
//  seguinte estratégica de ordenação (algoritmo conhecido como seleção direta):
//  a) selecione o elemento do vetor de 20 posições que apresenta o menor valor;
//  b) troque este elemento pelo primeiro;
//  c) repita estas operações, envolvendo agora apenas os 19 elementos restantes
//  (selecionando o de menor valor com a segunda posição), depois os 18 elementos
//  (trocando o de menor valor com a terceira posição), depois os 17, 16 e assim por
//  diante, até restar um único elemento, o de maior valor.
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
	cout<<"\n**primeiro vetor**";
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
	cout<<"\n**segundo vetor**";
	for(i=0; i<2; i++)
	{
		for(j=i+1; j<2; j++)
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
