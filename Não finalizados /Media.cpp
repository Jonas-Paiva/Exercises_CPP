#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
  int teste, prova, media;
  char *nome;
  printf("Media das notas\n");
  cout << "Nome do aluno: " << '\n';cin >> nome;
  cout << "Nota do teste: " << '\n';cin >> teste;
  cout << "Nota da prova: " << '\n';cin >> prova;
  media = (teste+prova)/2;
  cout <<"O aluno "<<nome<<", tem as notas \nTESTE= "<<teste<<" \nPROVA= "<<prova<<"\n";
  if (media>=6)
  {
    cout <<"O aluno "<<nome<<" foi aprovado com a media "<<media<<".\n";
  }
  else if (media<6)
  {
    cout <<"O aluno "<<nome<<" foi REPROVADO com a media "<<media<<".\n";
  }
}
