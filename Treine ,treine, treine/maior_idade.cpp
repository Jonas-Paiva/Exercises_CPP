#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
  int contador, idade, maior, menor;
  maior=0;
  menor=0;
  char nome[10];
  printf("Maior idade\n");
  for(contador=1; contador <= 3; contador++)
  {
    printf("CADASTRO DO USUÁRIO %i\n",contador);
    cout << "Qual é o seu nome: " << '\n';
    cin >> nome;
    cout << "Qual a sua idade: " << '\n';
    cin >> idade;
    if (idade >= 18)
    {
      maior++;
    }
    if (idade < 18)
    {
      menor++;
    }
  }
  printf("ANALIZANDO....\n");
  printf("=-=-=-=-=-=-==-=-=-==-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=--=-==-\n");
  printf("Tem %i Maiores de idade\nTem %i Menores de idade\n", maior, menor);
}
