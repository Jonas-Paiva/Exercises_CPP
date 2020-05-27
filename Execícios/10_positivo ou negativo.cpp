#include<iostream>
using namespace std;
int main()
{
	int num, op;
	op = 1;
	while(op==1)
	{
		cout<<"POSITIVO OU NEGATIVO\n";
		cout<<"Escolha um número: ";
		cin >> num;
		
		if(num==0)
		{
			cout<<"O numero "<<num<<" e neutro\n";
		}
		
		if(num>0)
		{
			cout<<"O numero "<<num<<" e positivo\n";
		}
		
		if(num<0)
		{
			cout<<"O numero "<<num<<" e negativo\n";
		}
		
		cout<<"Outro numero?\n[1]SIM\n[0]NAO: ";
		cin>>op;
		cout<<"\n";
	}
	system("pause");
}
