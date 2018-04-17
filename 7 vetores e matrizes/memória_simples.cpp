#include<iostream>
#include<stdlib.h>
#include<windows.h>
#define t 2
using namespace std;
char opc;
void menu()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n       --- JOGO DA MEMÓRIA --- \n";
	cout<<"\n           1 - iniciar \n";
	cout<<"\n           2 - sair \n";
	cout<<"\n    --- digite a opção desejada --- : ";
	cin>>opc;
}
main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	char memo[t][t]={'a', 'b', 'c', 'd'};
	char jogo[t][t], aux[t][t];
	menu();
	system("cls");
	if(opc=='1')
	  {		      
	   cout<<"\n --- decore as letras a seguir e suas respectivas posições --- \n\n";
	   cout<<"\n +-+-+-+-+-+-+-+- \n";
	   cout<<"\n       1   2\n\n";
	   for(i=0; i<t; i++)
	   {
	   	cout<<"  "<<i+1<<"  ";
		  for(j=0; j<t; j++)
		  {
			cout<<" "<<"["<<memo[i][j]<<"]";
		  }             
	   cout<<"\n\n";
	   }
	   cout<<"\n +-+-+-+-+-+-+-+- \n";
	   Sleep(5000);
	   system("cls"); 		             
	   cout<<"\n +++ partida iniciada +++ \n\n";
	   for(i=0; i<t; i++)
	   {
	      for(j=0; j<t; j++)
		  {
			cout<<"insira o que você viu na posição ["<<i+1<<""<<j+1<<"]:";
			cin>>jogo[i][j];
		  }
	   cout<<"\n";
	   }
	   for(i=0; i<t; i++)
	   {
		  for(j=0; j<t; j++)
			 {
			  if(jogo[i][j]==memo[i][j])
			  cout<<"\n ["<<i+1<<""<<j+1<<"]: acertou \n";			  
			  else
			  cout<<"\n ["<<i+1<<""<<j+1<<"]: errou \n";	
			  }
		}
      }
    else
	  {
		cout<<"\n ### fim de partida ### \n";
	  }  
}
