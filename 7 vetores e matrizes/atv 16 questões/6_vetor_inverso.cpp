// 6) Preencher um vetor de 12 posi��es com caracteres. Inverter o conte�do do vetor.

// Informar o resultado da invers�o.
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	setlocale(LC_ALL, "Portuguese");
	char vet1[3], vet2[3], aux;
	int i, j;
	for(i=0; i<3; i++)
	{
		cout<<"insira "<<(i+1)<<"� posi��o: ";
		cin>>vet1[i];
	}
	aux=vet1[0];
	for(i=0; i<3; i++)
	   for(j=0; j<3; j++)
	   {
	   	  if(vet1[i]>vet1[j])
	   	  {
	   		aux=vet1[i];
	   		vet1[i]=vet1[j];
	   		vet1[j]=aux;
		  }
	   }
	cout<<"\n*** vetor inverso ***";
	for(i=0; i<3; i++)
	cout<<"\n"<<vet1[i];   
}
