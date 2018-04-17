#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int c[3], i;
	for(i=0; i<3; i++)
	{
		cout<<"digite o valor: ";
		cin>>c[i];	
	}
	for(i=0; i<3; i++)
	{
			cout<<c[i];
	        cout<<"\n";
	}
	system("pause");
}
