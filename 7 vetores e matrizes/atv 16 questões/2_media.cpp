// 2) Ler as médias de 7 candidatos que prestaram concurso para a Receita Federal e suas respectivas 
// matrículas (números inteiros com 4 dígitos, ex. 2000, 2001, ...). Sabendo que para o candidato se 
// classificar ele tem que acertar no mínimo 50% dos 100 pontos propostos. Ao final informe o número 
// da matrícula do candidato e, logo ao lado, se ele foi classificado ou reprovado no concurso.
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int mat[7], i, media[7];
	for(i=0; i<3; i++)
	{
		cout<<"\ndigite a matrícula ["<<(i+1)<<"] com 4 dígitos: ";
		cin>>mat[i];
		cout<<"\ndigite a média ["<<(i+1)<<"] de 0 a 100: ";
		cin>>media[i];
		system("cls");
	}
	for(i=0; i<3; i++)
	{
		if(media[i]>=50)
		cout<<"\nmatrícula: "<<mat[i]<<" / classificado";
		else
		cout<<"\nmatrícula: "<<mat[i]<<" / reprovado";
	}
}
