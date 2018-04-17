//apresentar o fatorial de um número inteiro
#include<iostream>
using namespace std;
main()
{
	int n, fat=1;
	cout<<"insira o numero que deseja saber o fatorial: ";
	cin>>n;
	while(n>0)
    {
		fat=fat*n;
	    n=n-1;
	    if(n>0)
		{
		cout<<" x ";
        cout<<n;
		}
	}
	cout<<" = ";
    cout<<fat;
	system("pause");
}
