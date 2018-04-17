//questão anterior só que o usuário vai definir o incremento e a faixa de valores
#include<iostream>
using namespace std;
int main()
{
	int fi, ff, vi;
	cout<<"insira o numero inicial da faixa: ";
	cin>>fi;
	cout<<"insira insira o numero final da faixa: ";
	cin>>ff;
	cout<<"insira o valor do incremento: ";
	cin>>vi;
	while(fi<ff)
	{
		fi=fi+vi;
		cout<<" / ";
		cout<<fi;
	}
	system("pause");
}
