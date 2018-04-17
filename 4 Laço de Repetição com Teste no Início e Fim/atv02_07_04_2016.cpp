//números intereiros de 0 até 500 com incremento 2.
#include<iostream>
using namespace std;
main()
{
	int n=0;
	cout<<"insira um valor inteiro: ";
	cin>>n;
	while(n<100)
	{
		n=n+2;
	cout<<" / "; 	
	cout<<n;
	}
	system("\npause");
}
