//calculadora 
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float x,y, z;
	char op;
	cout<<"\n Expressão? ";
	cin>>x >>op >>y;
	switch(op)
	{
		case '+': cout<<"\n valor= ", z=x+y; break;
		case '-': cout<<"\n valor= ", z=x-y; break;
		case '*': cout<<"\n valor= ", z=x*y; break;
		case '/': cout<<"\n valor= ", z=x/y; break;
		default: cout<<"\n operador inválido: ", op;
	}
	cout<<z;
}
