#include<iostream>
using namespace std;
int main ()
{
	int diasV, idade;
	cout<<"Quantos dias de vida vc tem? : ";
	cin >> diasV;
	idade = diasV /360;
	cout<<"Voce tem aproximadamente "<<idade<<"anos\n";
	if(idade>18)
	{
		cout<<"Voce ja e maior de idade.\n";
	}
	system("pause");
}
