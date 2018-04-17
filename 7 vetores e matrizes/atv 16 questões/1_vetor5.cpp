// 1) Ler, processar e imprimir o resultado da soma entre dois vetores inteiros de 5 posições.
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int a[5], b[5], v3[5], i;
	cout<<"\t*digite 5 números para [A] e 5 p/ [B]*";
	for(i=0; i<5; i++)
	{
		cout<<"\nA: ";
		cin>>a[i];
	}
	for(i=0; i<5; i++)
	{
		cout<<"\nB: ", i+1;
		cin>>b[i];
	}
	for(i=0; i<5; i++)
	{
		v3[i]=a[i]+b[i];
		cout<<"\na soma e: "<<v3[i];
	}
}
