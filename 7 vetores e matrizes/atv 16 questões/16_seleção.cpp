// 16) Abstrair a sele��o de 5 alunos no processo de um concurso de Monitoria que dever�:
// a) Ler a matr�cula do aluno; (valor inteiro de 1001 a 1005)
// b) Ler as 3 notas do aluno e calcular a sua m�dia (usar uma matriz para armazenar essas 4 notas);
// c) Registrar a situa��o de cada aluno conforme a m�dia, onde o aluno ser� aprovado (m�dia >= 7) 
// ou reprovado (m�dia menor que 7), armazenando, respectivamente, para a situa��o, A ou R;
// d) Escrever o resultado do concurso, mostrando um boletim geral dos alunos que conter� as matr�culas,
// as notas e as m�dias, al�m da classifica��o (Aprovado ou Reprovado).
#include<iostream>
#include<stdlib.h>
#define a 3
#define b
using namespace std;
main()
{
	setlocale(LC_ALL,"Portuguese");
	int mat[a], n1, n2, n3, media[a], i;
	for(i=0; i<a; i++)
	{
		cout<<"\n digite a matr�cula ["<<i+1<<"] com 4 d�gitos: ";
		cin>>mat[i];
		cout<<"\n digite nota 1: ";
		cin>>n1;
		cout<<"\n digite nota 2: ";
		cin>>n2;
		cout<<"\n digite nota 3: ";
		cin>>n3;
		media[i]=(n1+n2+n3)/3;
		system("cls");
	}
	for(i=0; i<a; i++)
	{
		if(media[i]>=7)
		cout<<"\nmatr�cula: "<<mat[i]<<"| m�dia: "<<media[i]<<" | classificado";
		else
		cout<<"\nmatr�cula: "<<mat[i]<<"| m�dia: "<<media[i]<<" | reprovado";
	}
}
