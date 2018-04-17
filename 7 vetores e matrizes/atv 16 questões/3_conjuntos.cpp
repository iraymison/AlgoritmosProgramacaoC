// 3) Ler dois conjuntos inteiros (A e B) e informar A união B, A intersecção B, A - B e B – A.
// IMCOMPLETO, CONSERTAR
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int a[3], b[3], c[6], i, j, aux1, aux2, aux3;
// conjunto A	
	for(i=0; i<3; i++)
	{
		cout<<"elemento ["<<(i+1)<<"] do conjunto A: ";
		cin>>a[i];
	}
	for(i=0; i<3; i++)
	for(j=i+1; j<3; j++)
	{
		if(a[i]>a[j])
		{
			aux1=a[i];
			a[i]=a[j];
			a[j]=aux1;
		}	
	}
// conjunto b	
	for(i=0; i<3; i++)
	{
		cout<<"elemento ["<<(i+1)<<"] do conjunto B: ";
		cin>>b[i];
	}
// lógica para obter a união b	
    for(i=0; i<3; i++)
    {
    	c[i]=a[i];
	}
	for(i=0; i<6; i++)
	{
		c[i+3]=b[i];
	}
    aux3=c[0];
    for(i=0; i<6; i++)
       for(j=i; j<6; j++)
          if(c[i]>c[j])
          {
          	aux3=c[j];
          	c[j]=c[i];
          	c[i]=aux3;
		  }		  
// vetor ordenado a união b
    cout<<"\n*** A união B ***";
    for(i=0; i<6; i++)
    cout<<"\n"<<c[i];
// lógica p/ obter a intersecção b
    for(i=0; i<6; i++)
    {
    	
	}







    
}
