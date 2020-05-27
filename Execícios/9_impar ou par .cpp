#include<iostream>
using namespace std;
int main()
{
	long int num, op;
	op = 1;
	while(op==1)
	{
		cout<<"PAR OU IMPAR\n";
		cout<< "Escolha um  numero:";
		cin >> num;
		if(num%2 == 0)
		{
			cout<<"O numero "<<num<<" e PAR\n";
		}
		else
		{
			cout<<"O numero "<<num<<" e IMPAR\n";
		}
		cout<<"Outro numero?\n[1]SIM\n[0]NAO:";
		cin>> op;
		cout<<"\n";
	}
system("pause");
}
