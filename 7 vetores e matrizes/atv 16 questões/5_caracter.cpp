// 5) Preencher dois vetores, A e B de 5 posi��es, com caracteres. Construir um terceiro

// vetor C para armazenar a concatena��o (jun��o dos conte�dos) dos vetores A e B.

// Apresentar o resultado.
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	char v1[3], v2[3], v3[6];
	int i, j;
	cout<<"\n*** vetor A ***";
	for(i=0; i<3; i++)
	{
		cout<<"\ninsira o "<<(i+1)<<"� caracter: ";
		cin>>v1[i];
		
	}
	cout<<"\n*** vetor B ***";
	for(i=0; i<3; i++)
	{
		cout<<"\ninsira o "<<(i+1)<<"� caracter: ";
		cin>>v2[i];
	}
// concatena��o dos vetores	
	for(i=0; i<3; i++)
	{
		v3[i]=v1[i];
	}
	for(i=0; i<3; i++)
	{
		v3[i+3]=v2[i];
    }
    cout<<"\n*** vetor c ***";
	for(i=0; i<6; i++)
	{
		cout<<"\n"<<v3[i];
	}
}
