// reserva de lugares em um cinema
#include<iostream>
#include<stdlib.h>
#define d1 3
#define d2 3
using namespace std;
main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	float cine[d1][d2]={11, 12, 13, 21, 22, 23, 31, 32, 33};
	float lincol;
	char opc;
	cout<<"\n\t *** MAKLOUF CINEMAS *** \n";
	while(opc!='3')
	{
		cout<<"\n\t *** O QUE VOCÊ DESEJA FAZER? *** \n";
		cout<<"\n\t 1 - ver lugares disponíveis. \n";
		cout<<"\n\t 2 - fazer reserva. \n";
		cout<<"\n\t 3 - sair. \n";
		cout<<"\n DIGITE O NÚMERO DA OPÇÃO DESEJADA: ";
		cin>>opc;
		system("cls");
		if(opc=='1')
		{
		  cout<<"\n\t *** ALOCAÇÃO DAS POSTRONAS *** \n";	
	      for(i=0; i<d1; i++)
	        {
		      for(j=0; j<d2; j++)
		         {
			      cout<<"\t"<<"|["<<cine[i][j]<<"]|";
		         }
	      cout<<"\n";	
		    }
	    }
	    else
	    {
	    	if(opc=='2')
	    	{
	    		cout<<"\n digite o número da linhae da coluna juntos: ";
	    		cin>>lincol;
	    		{
	    			cout<<"\n *** opção selecionada *** \n";	
					for(i=0; i<d1; i++)
	                   {
		                for(j=0; j<d2; j++)
		                   {
		                   	if(lincol==cine[i][j])
		                   		cine[i][j]=0;
			                     cout<<" "<<"\t"<<"|  ["<<cine[i][j]<<"]  |";
		                   }       
	                cout<<"\n";
		               }
		            cout<<"\n OBS: lugares marcados com '0' estão coupados \n";	   
				}
			}
			else
			cout<<"\n\t --- OPÇÃO INVÁLIDA --- \n\n";
		}


    }
system("pause");    
}
