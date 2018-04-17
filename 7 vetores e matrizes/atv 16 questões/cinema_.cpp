// reserva de lugares em um cinema
#include<iostream>
#define d1 3
#define d2 3
using namespace std;
main()
{
	int i, j;
	char cine[d1][d2];
	for(i=0; i<d1; i++)
	{
		for(j=0; j<d2; j++)
		{
			cine[i][j]='a';
			cine[i][j]='b';
			cine[i][j]='c';
			cine[i][j]='d';
			cine[i][j]='e';
			cine[i][j]='f';
			cine[i][j]='g';
			cine[i][j]='h';
			cine[i][j]='i';
			
			cout<<" "<<cine[i][j];
		}
	cout<<"\n";		
	}


}
