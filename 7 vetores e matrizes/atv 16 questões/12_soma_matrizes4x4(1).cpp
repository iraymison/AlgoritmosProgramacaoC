// 12) Preencher duas matrizes A e B de 4x4, depois some estas duas matrizes e insira o
// resultado em outra matriz C. No final, mostre o resultado da matriz C.
#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[2][2], b[2][2], c[2][2], i, j;
	cout<<"*** matriz A ***";
	for(i=0; i<2; i++)
	   for(j=0; j<2; j++)
	   {
	   	cout<<"\ninsira a posição ["<<i+1<<"]["<<j+1<<"]: ";
	   	cin>>a[i][j];
	   }
	cout<<"*** matriz B ***";   
	for(i=0; i<2; i++)
	   for(j=0; j<2; j++)
	   {
	   	cout<<"\ninsira a posição ["<<i+1<<"]["<<j+1<<"]: ";
	   	cin>>b[i][j];
	   }
	cout<<"\n*** matriz A + matriz B ***\n";
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
	   {
	   	c[i][j]=a[i][j]+b[i][j];
	   	cout<<" "<<c[i][j];
	   }
	cout<<"\n";
	}
}
