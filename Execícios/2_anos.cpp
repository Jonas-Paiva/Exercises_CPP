#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int dias, anos;
	cout << "Quantos dias de vida? ";
	cin >> dias;
	anos = dias/365;
	cout << "Voc� tem "<<anos<<"anos de vida.";
	system("pause");
}
