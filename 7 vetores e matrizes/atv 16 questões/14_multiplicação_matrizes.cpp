// 14) Multiplicar uma matriz X de 2x3 por uma matriz Y de 3x4 e apresente o resultado.
#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL, "Portuguese");
	int x[2][3], y[3][4], z[2][8], i, j;
	cout<<"\n***matriz 2x3***\n";
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"insira a posição ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>x[i][j];
		}	
	}
	cout<<"\n***matriz 3x4***\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<"insira a posição ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>y[i][j];
		}	
	}
	cout<<"\n***matriz 2x3***\n";
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<" "<<x[i][j];
		}	
		cout<<"\n";		
	}
	cout<<"\n***matriz 3x4***\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			cout<<" "<<y[i][j];
		}	
		cout<<"\n";		
	}
// para colocar em cada posição		

	for(i=0; i<1; i++)
	{
		for(j=0; j<4; j++)
		{
			z[i][j]= x[i][j]*y[i][j] + x[i][j+1]*y[i+1][j] + x[i][j+2]*y[i+2][j];
		    z[i][j+1]= x[i][j]*y[i][j] + x[i][j+1]*y[i+1][j] + x[i][j+2]*y[i+2][j];	
		    z[i][j+2]= x[i][j]*y[i][j] + x[i][j+1]*y[i+1][j] + x[i][j+2]*y[i+2][j];	
		    z[i][j+3]= x[i][j]*y[i][j] + x[i][j+1]*y[i+1][j] + x[i][j+2]*y[i+2][j];	
		}
	}
	for(i=0; i<1; i++)
	{
		for(j=0; j<4; j++)
		z[i+1][j]= x[i+1][j]*y[i][j] + x[i+1][j+1]*y[i+1][j] + x[i+1][j+2]*y[i+2][j];
	}
	cout<<"\n***matriz resultante***\n";
	for(i=0; i<2; i++)
	{
		for(j=0; j<8; j++)
		{
			cout<<"  "<<z[i][j];
		}
	cout<<"\n";	
	}
















}















