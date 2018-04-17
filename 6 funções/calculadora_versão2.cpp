// criando funções, calculadora versão 2 / raymison maklouf
#include<iostream>
#include<math.h>
using namespace std;
int opcao;
void menu()
{ 
  setlocale(LC_ALL,"Portuguese");
  cout<<"\n1 = soma ";
  cout<<"\n2 = multiplicação";
  cout<<"\n3 = subtração";
  cout<<"\n4 = divisão";
  cout<<"\n5 = potencia";
  cout<<"\n6 = fatorial";
  cout<<"\n0 = sair";
  cout<<"\nopção desejada:";
  cin>>opcao; 
}
void titulo() 
{ 
cout<<"\n***CALCULADORA***"; 
}
void soma(int a, int b)
{ 
cout<<" "<<(a+b); 
}
void mult(int a, int b)
{ 
cout<<" "<<(a*b); 
}
void sub(int a, int b)
{
cout<<" "<<(a-b);
}
void div(int a, int b)
{
cout<<" "<<(a/b);
}
void pot(int a, int b)
{
cout<<" "<<pow(a,b);
}
void fat(int a)
{
	cout<<" "<<a*a; 
}
int main()
{ 
  system("cls");
  int n1, n2;
  do
  { 
     titulo();
     menu();
     if(opcao==0) break;
	 { 
	 cout<<"\nDigite os valores";
	 cout<<"\nPrimeiro:";
	 cin>>n1;
	 cout<<"\nSegundo:";
	 cin>>n2;
	 if(opcao==1)
	 soma(n1,n2);
	 if(opcao==2)
	 mult(n1,n2);
	 if(opcao==3)
	 sub(n1,n2);
	 if(opcao==4)
	 div(n1,n2); 
	 else
	 pot(n1,n2);
	 fat(n1);
	 }
  }
  while(opcao!=0); 
}  
