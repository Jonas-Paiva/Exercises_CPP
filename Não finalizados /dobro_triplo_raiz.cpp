#include <iostream>
#include<locale.h>
using namespace std;
int main()
{
  int num, dobro, triplo;
  cout <<"Escolha um número? : " << "\n";
  cin >> num;
  dobro = num*2;
  triplo = num*3;
  printf("O número %i\nDobro é %i\nTriplo é %i",num,dobro,triplo);
}
