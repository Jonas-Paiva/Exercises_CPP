#include<iostream>
#include<locale>
using namespace std;
int main()
{
	setlocale(LC_ALL,"ptb");
	int produto,pro_cento;
	cout<< "Qualè o valor do produtor: ";
	cin >> produto;
	pro_cento = (produto*0.20) + produto;
	cout << "O Valor com 20% de acrecimo é "<< pro_cento<<"\n";
	system("pause");
}
