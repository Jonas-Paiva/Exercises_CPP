#include<iostream>
using namespace std;
int main()
{
	int hora,op;
	char nome[15];
	op = 1;
	while(op == 1)
	{
		cout<<"BOM...?\n";
		cout<<"Qual e o seu nome? :";
		cin >> nome;
		cout<<"Que horas sao? : ";
		cin>> hora;
		if(hora>=6 && hora <12)
		{ 
			cout<<"BOM DIA, "<<nome;
		}
		if(hora >=12 && hora<18)
		{
			cout<<"BOA TARDE, "<<nome;
		}
		if(hora>=18 && hora<23)
		{
			cout<<"BOA NOITE, "<<nome;
		}
		if(hora<6 && hora >=0)
		{
			cout<<"BOA MADRUGADA, "<<nome;
		}
		cout<<"\n";
		cout<<"Desaja repetir?\n[1]SIM\n[2]NAO: ";
		cin>>op;
		cout<<"\n";
	}
	system("pause");
}
