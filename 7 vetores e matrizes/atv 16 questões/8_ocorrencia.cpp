// 8) Preencher um vetor de 30 posições com caracteres. Verificar a ocorrência
// (quantidade de vezes) de uma letra fornecida pelo usuário.
#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL, "Portuguese");
	char v1[30];
	int i, j,  ocorre[30];
	for(i=0; i<30; i++)
	{
		cout<<"insira a posição "<<i+1<<": ";
		cin>>v1[i];
	}
	ocorre[0]=0;
    for(i=0; i<30; i++)
    {
    	ocorre[i]='\0';
    	for(j=0; j<30; j++)
       {
    	if(v1[i]==v1[j])
    	ocorre[i]++;  
	   }
    cout<<"\ncaracter "<<v1[i]<<" ocorre: "<<ocorre[i];	
	}
}
