#include<iostream>
using namespace std;
int main()
{
	int num,Qnum;
	cout<<"Escolha um numero: ";
	cin>>num;
	Qnum= num*num;
	cout<<"O quadrado desse numero e "<<Qnum<<"\n";
	if(Qnum > 25)
	{
		cout<< "\nEsse numero e maior que 25.\n";
	}
	system("pause");
}
