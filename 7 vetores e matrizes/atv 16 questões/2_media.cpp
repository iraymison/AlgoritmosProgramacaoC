// 2) Ler as m�dias de 7 candidatos que prestaram concurso para a Receita Federal e suas respectivas 
// matr�culas (n�meros inteiros com 4 d�gitos, ex. 2000, 2001, ...). Sabendo que para o candidato se 
// classificar ele tem que acertar no m�nimo 50% dos 100 pontos propostos. Ao final informe o n�mero 
// da matr�cula do candidato e, logo ao lado, se ele foi classificado ou reprovado no concurso.
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int mat[7], i, media[7];
	for(i=0; i<3; i++)
	{
		cout<<"\ndigite a matr�cula ["<<(i+1)<<"] com 4 d�gitos: ";
		cin>>mat[i];
		cout<<"\ndigite a m�dia ["<<(i+1)<<"] de 0 a 100: ";
		cin>>media[i];
		system("cls");
	}
	for(i=0; i<3; i++)
	{
		if(media[i]>=50)
		cout<<"\nmatr�cula: "<<mat[i]<<" / classificado";
		else
		cout<<"\nmatr�cula: "<<mat[i]<<" / reprovado";
	}
}
