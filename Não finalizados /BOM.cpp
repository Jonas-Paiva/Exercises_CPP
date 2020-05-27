#include<iostream>
#include<string>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	char nome[10];
	int horas=0;
	cout<<"Olo.tudo bem !\n";
	cout<<"Qual e o seu nome? :";
	cin >> nome;
	cout<<"Que horas sao? :";
	cin >> horas;

	if(horas>=12 && horas <18)
	{
		cout<<"Bao tarde!, "<<nome<<"\nMuito obrigado.\n";
	}

	if(horas<12 && horas>=5)
	{
		cout<<"Bom dia!, "<<nome<<"\nMuito obrigado.\n";
	}
	if(horas<5 && horas>=18)
	{
		cout<<"Boa noite, "<<nome<<"\nMuito obrigado.\n";
	}
}
