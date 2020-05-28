#include<iostream>
using namespace std;
int main()
{
	int op;
	float sal,dif;
	const float mim =1000.00;
	op = 1;
	while(op==1)
	{
		cout<<"SALARIO MINIMO\n";
		cout<<"Qual o seu salario:R$";
		cin>>sal;
		//Coloca um switch ai po 
		if(sal>mim)
		{
			dif=sal-mim;
			cout<<"Seu salario de R$"<<sal<<" e maior que o salario minimo.\n";
			cout<<"A diferen�a e R$"<<dif<<" a mais.";
		}
		
		if(sal<mim)
		{
			dif= mim -sal;
			cout<<"Seu salario de R$"<<sal<<" e menor que o salario menimo.\n";
			cout<<"A diferen�a e de R$"<<dif<<" a menos.";
		}
		cout<<"\n";
		cout<<"Desaja repatir?\n[1]SIM\n[2]NAO:";
		cin>>op;
		cout<<"\n";
	}
	cout<<"\n";
	system("pause");
}
