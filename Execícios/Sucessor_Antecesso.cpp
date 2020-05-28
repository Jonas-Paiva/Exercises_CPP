#include<iostream>
#include<locale.h>
using namespace std;

int main()
{
  int num, antecessor, sucessor;
  cout << "Escola um número? : " << '\n';
  cin >> num;
  antecessor = num-1;
  sucessor = num+1;
  printf("O número %i \nSucessor %i\nAntecessor %i\n",num,sucessor,antecessor);
}
