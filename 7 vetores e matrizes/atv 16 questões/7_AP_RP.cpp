// 7) Ler 3 notas de 6 alunos e suas respectivas matr�culas. Calcular a m�dia aritm�tica

// das notas dos alunos. Informar a matr�cula do aluno, a m�dia aritm�tica e se o aluno

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
		cout<<"\n"<<(i+1)<<"� matr�cula: ";
		cin>>mat[i];
		cout<<"\n1� nota: ";
		cin>>n1;
		cout<<"\n2� nota: ";
		cin>>n2;
		cout<<"\n3� nota: ";
		cin>>n3;
		media[i]=(n1+n2+n3)/3;
	}
	for(i=0; i<3; i++)
	{
		if(media[i]>=7)
		  cout<<"\nmatr�cula: "<<mat[i]<<" / m�dia: "<<media[i]<<" / aprovado";
		else
		  cout<<"\nmatr�cula: "<<mat[i]<<" / m�dia: "<<media[i]<<" / reprovado";
	} 
}
