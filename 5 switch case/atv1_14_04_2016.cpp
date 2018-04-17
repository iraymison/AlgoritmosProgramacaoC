// exercícios de decisão múltipla
#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	system("cls");
	int n;
    cout<<"\n Digite um n'umero: ";
    cin>>n;
    switch(n)
    {
    	case 1: putchar('A'); break;
    	case 2: putchar('B');
    	case 3: putchar('C');break;
    	default: cout<<('*');
    	case 5: putchar('D');
	}
	putchar('.');
}
