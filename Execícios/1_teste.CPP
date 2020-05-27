#include <iostream>

using namespace std;

int main(){
	MessageBox(,"Hello","Caption",MB_OK);
	int anoAtual, anoNasc, idade;
	cout << "Qual e o ano atual? ";
	cin >> anoAtual;
	cout << "Qual e seu ano de nascimento? ";
	cin >> anoNasc;
	idade = anoAtual - anoNasc;
	cout << "Sua idade e " << idade << "anos.\n";	
	system("pause");
	return 0;
}
