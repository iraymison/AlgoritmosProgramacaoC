//
#include<iostream>
using namespace std;
main()
{
	int x, y, opc;
	while(opc==0)
	{
		cout<<"\nInsira x: ";
		cin>>x;
		if(x>=0)
		{
			y=2*x;
		}
		else
		{
			y=(-x)+2;
		}
		cout<<"\nx e' igual: "<<y;
		cout<<"\ndeseja continuar? [0] p/ SIM [outro numero] p/ NAO: ";
		cin>>opc;
	}
	system("pause");
}
