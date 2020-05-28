#include<iostream>
using namespace std;
int main()
{
	float quatDin, valCob;
	int Litro;
	cout << "Valor do combustivel? :R$";
	cin >> valCob;
	cout << "Quantidade de dinheiro ?:R$";
	cin >> quatDin;
	Litro = quatDin/valCob;
	cout<<"Com R$"<<quatDin<<" da para abastecer "<<Litro<<"L de gasolina.\n";
	system("pause");
}
