// 16) Abstrair a seleção de 5 alunos no processo de um concurso de Monitoria que deverá:
// a) Ler a matrícula do aluno; (valor inteiro de 1001 a 1005)
// b) Ler as 3 notas do aluno e calcular a sua média (usar uma matriz para armazenar essas 4 notas);
// c) Registrar a situação de cada aluno conforme a média, onde o aluno será aprovado (média >= 7) 
// ou reprovado (média menor que 7), armazenando, respectivamente, para a situação, A ou R;
// d) Escrever o resultado do concurso, mostrando um boletim geral dos alunos que conterá as matrículas,
// as notas e as médias, além da classificação (Aprovado ou Reprovado).
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
		cout<<"\n digite a matrícula ["<<i+1<<"] com 4 dígitos: ";
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
		cout<<"\nmatrícula: "<<mat[i]<<"| média: "<<media[i]<<" | classificado";
		else
		cout<<"\nmatrícula: "<<mat[i]<<"| média: "<<media[i]<<" | reprovado";
	}
}
