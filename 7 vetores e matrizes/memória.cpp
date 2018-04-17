#include<iostream>
#include<stdlib.h>
#include<windows.h>
#define t 2
using namespace std;
char opc;
void menu()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n --- JOGO DA MEMÓRIA --- \n";
	cout<<"\n 1 - iniciar \n";
	cout<<"\n 2 - sair \n";
	cout<<"\n --- digite a opção desejada --- : ";
	cin>>opc;
}
char play;
void menu2()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n --- escolha uma das opções a seguir --- \n";
	cout<<"\n 1 - visualizar a tabela \n";
	cout<<"\n 2 - colocar as posições \n";
	cout<<"\n 3 - voltar ao menu anterior \n";
	cout<<"\n digite a opção: ";
	cin>>play;
}
char cont;
void menu3()
{
		setlocale(LC_ALL, "Portuguese");
		cout<<"\n +++ deseja continuar? +++ \n";
		cout<<"\n 1- sim \n";
		cout<<"\n 2- voltar ao menu anterior \n";
		cout<<"\n digite a opção: ";
		cin>>cont;
	
}
main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	char memo[t][t]={'c', 'a', 'y', 'x'};
	char jogo[t][t];
	
	do
	{
		menu();
		system("cls");
		if(opc=='1')
		{
			do
			{
				menu2();
				system("cls");
			    if(play=='1')
			    {
			      
			       	cout<<"\n --- decore as letras a seguir e suas respectivas posições --- \n";
			           for(i=0; i<t; i++)
			             {
				          for(j=0; j<t; j++)
				            {
					         cout<<"\t"<<i+1<<j+1<<" "<<"[ "<<memo[i][j]<<" ]";
				            }            
			           cout<<"\n";
			             }
			        Sleep(3000);
					system("cls");  		             
				}
			   if(play=='2')
			   {
			   	do
			   	{
			   		cout<<"\n +++ partida iniciada +++ \n";
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
				menu3();
				system("cls");  
				}
			   while(cont!='2');  
			   }
			
				
			}
			while(play!='3');
		}
	}
	while(opc!='2');
}
