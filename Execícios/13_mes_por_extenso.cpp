#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
  int num;
  char*mesExtenso;
  printf("Relacionando Num com os Meses.\n");
  cout << "Escolha um número:" << '\n';cin >> num;
  while (num>12 || num<1)
  {
    if (num == 1)
    {
      mesExtenso="janeiro";
    }
    else if (num == 2)
    {
      mesExtenso="fevereiro";
    }
    else if (num==3)
    {
      mesExtenso="março";
    }
    else if (num==4)
    {
      mesExtenso="Abril";
    }
    else if (num==5)
    {
      mesExtenso="Maio";
    }
    else if (num==6)
    {
      mesExtenso="Junho";
    }
    else if (num==7)
    {
      mesExtenso="julho";
    }
    else if (num==8)
    {
      mesExtenso="Agosto";
    }
    else if (num==9)
    {
      mesExtenso="setembro";
    }
    else if (num==10)
    {
      mesExtenso="Outubro";
    }
    else if (num==11)
    {
      mesExtenso="Novembro";
    }
    else if (num==12)
    {
      mesExtenso="Dezembro";
    }
    else
    {
      cout << "Opção inválida" << '\n';
    }
  }
  cout << "O mês equivalente é " <<mesExtenso<< '\n';
}
