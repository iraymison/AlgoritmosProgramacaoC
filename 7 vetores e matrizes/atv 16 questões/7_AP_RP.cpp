// 7) Ler 3 notas de 6 alunos e suas respectivas matrículas. Calcular a média aritmética

// das notas dos alunos. Informar a matrícula do aluno, a média aritmética e se o aluno

// foi aprovado (maior ou igual a 7) ou reprovado (menor que 7).
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	setlocale(LC_ALL, "Portuguese");
	float mat[3], n1, n2, n3, media[3];
	int i;
	for(i=0; i<3; i++)
	{
		cout<<"\n"<<(i+1)<<"º matrícula: ";
		cin>>mat[i];
		cout<<"\n1º nota: ";
		cin>>n1;
		cout<<"\n2º nota: ";
		cin>>n2;
		cout<<"\n3º nota: ";
		cin>>n3;
		media[i]=(n1+n2+n3)/3;
	}
	for(i=0; i<3; i++)
	{
		if(media[i]>=7)
		  cout<<"\nmatrícula: "<<mat[i]<<" / média: "<<media[i]<<" / aprovado";
		else
		  cout<<"\nmatrícula: "<<mat[i]<<" / média: "<<media[i]<<" / reprovado";
	} 
}
