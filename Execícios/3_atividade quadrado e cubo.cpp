#include <iostream >
#include <locale >
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int quadrado, cubo, num ;
cout <<"Escolha um n�mero: ";
cin >> num;
quadrado = num * num;
cubo = num * num * num;
cout <<" O quadrado de  "<<num<<" � "<<quadrado<<"\nE o cubo � "<<cubo<<"\n";
system("pause");
}

