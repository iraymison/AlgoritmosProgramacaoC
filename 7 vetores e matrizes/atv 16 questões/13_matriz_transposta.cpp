// 13) Preencher uma matriz A de 4x2. Depois, transforme-a em uma matriz transposta At,

// claro, de 2x4, e mostre tanto a matriz A como a sua transposta At.
#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese"); 
	int a[4][2], b[2][4], i, j;
	for(i=0; i<4; i++)
	{
		for(j=0; j<2; j++)
		{
			cout<<"insira a posição ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>a[i][j];
		}
    }
    cout<<"\n*** matriz normal ***\n";
	for(i=0; i<4; i++)
	{
		for(j=0; j<2; j++)
		{
				cout<<" "<<a[i][j];	
		}
	cout<<"\n";	
	}
	cout<<"\n*** matriz transposta ***\n";
    for(i=0; i<2; i++)
    {
    	for(j=0; j<4; j++)
    	{
    		b[i][j]=a[j][i];
    		cout<<" "<<b[i][j];	
		}
	cout<<"\n";	
	}
}
