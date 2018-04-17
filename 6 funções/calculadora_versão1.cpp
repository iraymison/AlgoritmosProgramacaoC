// criando funções, calculadora versão 1 / raymison maklouf
#include<iostream>
using namespace std;
char opcao;
void menu()
{ 
  setlocale(LC_ALL,"Portuguese");
  cout<<"\n1 = soma ";
  cout<<"\n2 = multiplicação";
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
cout<<""<<(a*b); 
}
int main()
{ 
  int n1, n2;
  do
  { 
     titulo();
     menu();
	 if(opcao!='0')
	 { 
	 cout<<"\nDigite os valores";
	 cout<<"\nPrimeiro:";
	 cin>>n1;
	 cout<<"\nSegundo:";
	 cin>>n2;
	 if(opcao=='1')
	 soma(n1,n2);
	 else
	 mult(n1,n2);
	 } 
  }
  while(opcao!='0'); 
}  
