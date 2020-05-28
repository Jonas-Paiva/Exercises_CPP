#include <iostream >
#include <locale >
using namespace std;
int main()
{
setlocale(LC_ALL,"ptb");
int quadrado, cubo, num ;
cout <<"Escolha um número: ";
cin >> num;
quadrado = num * num;
cubo = num * num * num;
cout <<" O quadrado de  "<<num<<" é "<<quadrado<<"\nE o cubo é "<<cubo<<"\n";
system("pause");
}

