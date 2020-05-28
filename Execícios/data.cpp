#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
  setlocale(LC_ALL,"");
  int dia, mes, ano, idade;
  char nome[100];
  std::cout << "Informações de nascimemto" << '\n';
  std::cout << "Qual o seu nome? : " << '\n';
  std::cin >> nome;
  std::cout << "Qual o dia? : " << '\n';
  std::cin >> dia;
  std::cout << "Qual o mês? :" << '\n';
  std::cin >> mes;
  std::cout << "Qual o ano? :" << '\n';
  std::cin >> ano;
  idade = 2020 - ano;
  printf("O usuário %s nasceu em\n%i/%i/%i\nIdade %i ",nome ,dia ,mes, ano, idade );
return 0;
}
